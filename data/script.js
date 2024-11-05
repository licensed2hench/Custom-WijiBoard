var gateway = `ws://${window.location.hostname}/ws`;
var websocket;
window.addEventListener('load', onload);
var key


function onload(event) {
    initWebSocket();
    setupButtonListeners();
}

function setupButtonListeners() {
    var buttons = document.querySelectorAll('.keys, .medkey, .bigkey');

    buttons.forEach(function(button) {
        button.addEventListener('click', function() {
            var key = this.id;
            console.log('Button ' + key + ' clicked');
            websocket.send(key); // Send the key as a WebSocket message
        });
    });
}

function initWebSocket() {
    console.log('Trying to open a WebSocket connection…');
    websocket = new WebSocket(gateway);
    websocket.onopen = onOpen;
    websocket.onclose = onClose;
    websocket.onmessage = onMessage;
}

function onOpen(event) {
    console.log('Connection opened');
}

function onClose(event) {
    console.log('Connection closed');
    setTimeout(initWebSocket, 2000);
}

function onMessage(event) {
    console.log(event.data);
}
