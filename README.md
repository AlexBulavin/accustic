# accustic
## Converts any symbols from ssid and password in settings.h file into sound.

### Конвертирует любой симвот из переменных ssid и password в файле settings.h в звук.
Для этого символ переводится в HEX формат (шестнадцатиричный формат), который состоит из двух байтов. После чего каждый байт преобразуется в звук в методе sound().
Для этого каждому символу 0...F шеснадцатиричной системы счисления сопоставлен свой звуковой тон (частота звука).
В результате получается звуковая трель, которую можно, например, скормить Яндекс Алисе при настройке её подключения к локальной WiFi сети.
Для этого в переменную ssid нужно записать название сети, а в переменную password - пароль.
Ну и, конечно, подключить на 3 пин пьезоизлучатель.

## Успехов!
