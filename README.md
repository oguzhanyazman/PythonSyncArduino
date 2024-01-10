# PythonSyncArduino
PythonSyncArduino
Benim elimde arduino pro micro olduğu için onu kullanacağım. Şuan baktığımda fiyatı biraz uçmuş durumda. Sitelere bakıp 32u4 mikro tabanlı en uygun kartlara bakıp konuya eklemesini yaparım.


Dikkat etmeniz gereken nokta eğer bir mikro işlemciden bu komutları yollayacaksanız ;

Klavye işlevleri, 32u4 veya SAMD mikro tabanlı kartların, mikrolarının yerel USB bağlantı noktası aracılığıyla bağlı bir bilgisayara tuş vuruşlarını göndermesine olanak tanır.

https://youtu.be/zJpOeJdzND0

Source Linkleri : https://github.com/oguzhanyazman/PythonSyncArduino

Arduino Referans kodlar:
https://www.arduino.cc/reference/en/language/functions/usb/keyboard/
https://www.arduino.cc/reference/en/language/functions/usb/mouse/

Demo bir kod yaptığımız için burada önemli olan nokta arduinomuzun tepkileri. Bu yüzden hızlıca input verip tepkilerini test ediyoruz.

Arduino tepkileri stabil hale getirdikten sonra ister opencv ister pyautogui görüntü işleme kütüphanelerini ekleyin isterseniz de ezbere periyodik kod yollayın

bu kısımda önemli yerlerden biri serial bağlantı portumuz ve send_command(user_input) gidecek olan değerdir.

12 saatlik bir test sürecinin ardından python - arduino haberleşmesinde bir bug yaşamadım. Ana bilgisayardan cihaza while true olarak seri cevap gönderip cevap aldım.

Bu kısımdan sonra proje sizin hayal gücünüze ihtiyacınıza kalmış durumda

