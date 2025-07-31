## Custom WijiBoard Project

Welcome to the **Custom WijiBoard** GitHub repository

---

## Important Note

This repository contains source files for a personal, customized version of the **WijiBoard**. See the original for better information on support and resorces.

---

## What is the Original WijiBoard?

The **WijiBoard** is a unique, remote-controlled interactive board that lets you move a planchette using WiFi, Bluetooth, or a web interface. It combines hands-on electronics with fun, supernatural-inspired functionality, providing a fascinating way to learn hardware, programming, and PCB design.

To see it in action, check out our [YouTube video](https://youtu.be/cnTcyXp5cuc?si=UInx9ra7MZg4BWGi) where we explore WijiBoard’s features and give a demonstration!

---

## What is the Custom WijiBoard?

I am attempting to modify the files of this project to exspand the **WijiBoard** fuctionality.

Goals:
Add the ability to transmit a fill string of text. Currently it can only do one letter at a time, not accepting a new input until after the old input cycle has completed.
Add more "Hot Key" words phrases and behaviors, so that more complex behavior can be automated with a single command.
Add Home Assistant integration, so that Home Assistant can trigger pe-programed sequences and ideally, send full text strings.

---

## Current Issues

As of 7/31/25: 
PlatformIO has been having issues compiling for esp32 chipset. Somewhere an update broke one of the librarys / repositories. This may delay the project.
ESPHome via Home Assistant Addon is working with a manual "use older library" work around. But the idea of rewriting all of this code in yaml format is intimidating.
Currenly I have lost access to the original video tutorial. I will see if I can recover that and review.

---

## Components Used

- ESP32 Microcontroller (recommended)
- Stepper Motors
- Custom PCB (included in this repo)
- Web or Bluetooth interface for control

---

## Author

The original project was created by [Ryan Kelly](https://www.thebetterryankelly.com/) under **Factorem**. For more about thier work and other projects, visit [Factorem](https://factorem.io/), where we specialize in educational resources and production design consulting for makers, DIYers, and developers.

---

Thank you for checking out WijiBoard! Have fun exploring, building, and customizing your own interactive planchette experience.

