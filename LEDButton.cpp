#include "LEDButton.h"

// LED Constructor
LED::LED() {
    isOn = false; // LED başlangıçta kapalı
}

// LED'i aç
void LED::turnOn() {
    isOn = true;
    std::cout << "LED açık" << std::endl;
}

// LED'i kapat
void LED::turnOff() {
    isOn = false;
    std::cout << "LED kapalı" << std::endl;
}

// LED'in durumunu döndür
bool LED::getState() {
    return isOn;
}

// Düğme durumunu oku (basıldı mı?)
bool Button::isPressed() {
    // Düğme basıldığında true, değilse false döndür
    return false; // Şimdilik her zaman false döndürüyoruz
}
