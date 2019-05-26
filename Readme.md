
# Potansiyometre ile ESC Kontrol
Hobboywing firmasının XRotor Pro 40A esc nin potansiyometre ile kontrolü anlatıldı. 
## Dikkat edilmesi gerekenler
BLDC motorların çalışması için içindeki anahtarların tetiklenmesi gerekir. Bu tetiklenmeler servo motorlar gibi çalıştırılır. Dolayısıyla ESC arduino programına servo gibi tanıtılması gerekir. Tanıtılırken dikkat edilmesi gereken başka bir husus çalışma frekanslarıdır. Bu yüzden ESC nin datasheeti de eklendi. Datasheet incelenirse çalışma frekansı 0-620 Hz olarak görülür. dolayısıyla bu parametre tanıtılma esnasında mikrosaniyeler cinsinden girilir. Daha sonrasında potansiyometreden okunan veriler "map " fonksiyonu ile 0-180 arasına çekilmelidir. Bunun sebebi bldc motorun içindeki servoların tetiklenmesinden kaynaklıdır. 
