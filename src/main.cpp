#include <Arduino.h>
#include "ServerLib.h"
#include "PositionControl.h"
#include "StepperControl.h"

void KeyPress(); //Function prototype

Coordinate XYTableLookup(char key); //Function prototype
Angles calculateInverseKinematics(Coordinate coord); //Function prototype

bool newRequest = false; //Flag to check if a new request has been made
char message = '*'; //Variable to store the message

void setup()
{
    Serial.begin(115200); 
    StartServer(); 
    InitializeSteppers(); 
    Serial.println("Steppers initialized");
    Serial.println("Homing Initialized...");
    while (!PerformHoming())
    {
        Serial.println("Homing...");
    }
    Serial.println("Homing finished");
}

void loop()
{
    KeyPress();

}

void KeyPress()
{
    if (newRequest)
    {
        Coordinate coord = XYTableLookup(message); //Lookup the X and Y coordinates associated with the key
        Serial.print("X: ");
        Serial.println(coord.x); 
        Serial.print("Y: ");
        Serial.println(coord.y);

        Angles ang = calculateInverseKinematics(coord); //Calculate the inverse kinematics based on the X and Y coordinates

        Serial.println(message);
        Serial.println(ang.theta1);
        Serial.println(ang.theta2);
        
        MoveSteppersTo(ang.theta1, ang.theta2); //Move the steppers to the calculated angles
        newRequest = false;
    }
}