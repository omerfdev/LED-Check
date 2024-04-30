# LED ve Düğme Kontrolü

Bu proje, bir LED'in durumunu kontrol eden ve bir düğmeye basıldığında LED'in durumunu değiştiren basit bir C++ programını içerir.

## Dosyalar

- `LEDButton.h`: LED ve Button yapılarının (structures) tanımlandığı başlık dosyası.
- `LEDButton.cpp`: LED ve Button yapılarının implementasyonunun bulunduğu kaynak dosyası.
- `Main.cpp`: Ana program dosyası.

## Kullanım

1. Projenin dosyalarını bir C++ derleyicisi ile derleyin. Örneğin, g++ kullanarak:
    ```
    g++ LEDButton.cpp Main.cpp -o LEDButton
    ```

2. Derlenmiş programı çalıştırın:
    ```
    ./LEDButton
    ```

3. Program çalıştığında, düğmeye basarak LED'in durumunu değiştirebilirsiniz. LED açıkken tekrar düğmeye basarsanız, LED kapanacaktır, ve tam tersi.

## Lisans

Bu proje MIT lisansı altında lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasını inceleyebilirsiniz.
