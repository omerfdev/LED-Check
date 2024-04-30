#include "LEDButton.h"

int main() {
    LED led; // LED yapısı (structure)
    Button button; // Düğme yapısı (structure)

    while (true) {
        // Her döngüde düğmenin durumunu kontrol et
        if (button.isPressed()) {
            // Düğme basıldığında LED durumunu tersine çevir
            if (led.isOn) {
                led.turnOff();
            } else {
                led.turnOn();
            }

            // LED durumunu değiştirdikten sonra bir süre beklet
            sleep(1); // 1 saniye beklet
        }
    }

    return 0;
}
