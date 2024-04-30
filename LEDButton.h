#ifndef LEDBUTTON_H
#define LEDBUTTON_H

#include <iostream>
#include <unistd.h> // sleep fonksiyonu için

// LED yapısı (structure)
struct LED {
    bool isOn; // LED'in durumu

    // Constructor
    LED();

    // LED'i aç
    void turnOn();

    // LED'i kapat
    void turnOff();

    // LED'in durumunu döndür
    bool getState();
};

// Düğme yapısı (structure)
struct Button {
    // Düğme durumunu oku (basıldı mı?)
    bool isPressed();
};

#endif // LEDBUTTON_H
