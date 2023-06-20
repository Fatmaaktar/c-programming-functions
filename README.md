# c-programming-notes
## C programlama dilinde standart fonksiyonlar  
#### conio.h kütüphanesine ait fonksiyonlar  
**clrscr** Ekranı temizler  
**delline** Sadece imlecin bulunduğu satırı siler  
**clreol** İmlecin bulunduğu yerden satır sonuna kadar kısmı siler  
**insline** Araya boş bir satır ekler  
**textcolor** text ekranda yazı rengini tanımlar(0-15 atası renkler)  
**textbackground** text ekranda zemin rengi tanımlar  
**lowvideo** yazının görüntüsünü matlaştırır   
**highvideo** yazının görüntüsünü parlaklaştırır  
**normvideo** parlaklaştırılan veya matlaştırılan yazıyı normla hale getirir  
**wherex** text ekranda imlecin yatay pozisyonunu verir  
**wherey** imlecin düşey pozisyonunu verir   
**gotoxy** imleci text ekranda (x,y) verilen kordinatlara konumlandırır  
**kbhit** herhangi bir tuşa basılıp basılmadığını kontrol eder  
**cprintf** formatlı çıkış bilgisi yazdırır  
**cscanf** formatlı giriş bilgisi yazdırır  
 #### string.h kütüphanesi fonksiyonları  
 **strlen** parametre olarak verilen stringdeki karakter sayısını verir  
 **strlwr** verilen stringin bütün karakterlerini küçük harfe çevirir  
 **strupr** verilen stringin tüm karakterlerini büyük harfe çevirir  
 **strrev** verilen stringi tersine çevirir  
 
 #### math.h kütüphanesine ait fonksiyonlar  
 **abs** verilen tam sayının mutlak değerini üretir  
 **cos** radyan cinsinden verilen açının cosinüsünü verir  
 **sin** radyan cinsinden verilen açının sinüsünü verir  
 **tan** radyan cinsinden verilen açının tanjantını verir  
 **pow** üs alma fonksiyonudur  
 **log** verilen sayının logaritmasını alır  
 **sqrt** verilen parametrenin karekökünü alır  
 **ceil** yukarı yuvarlama işlemi yapar  
 **floor** aşağı yuvarlama işlemi yapar  
 
 #### stdio.h kütüphanesine ait fonksiyonlar  
 **gets** giriş aygıtından string okur  
 **puts** giriş birimine bir stringi yazmak için kullanılır  
 **getw** dosyadan tamsayı okur  
 **putw** dosyaya tam sayı yazar  
 
 #### time.h kütüphanesine ait fonksiyonlar  
 **clock** çalıştırıldığı andaki sistem saati bilgilerini alır  
 **time** saat bilgisini saniye olarak verir  
 
 #### dos.h kütüphanesine ait fonksiyonlar  
 **settime** sistem zaman bilgisi değiştirir  
 **gettime** sistem zaman bilgisini öğrenmek için kullanılır  
 **delay** verilen milisaniye kadar programı durdurur  
 **sleep** verilen saniye kadar programı durdurur  
 **sound** PC'nin ses üreticisinden verilen frekansta ses üretir  
 
 #### stdlib.h kütüphanesine ait fonksiyonlar  
 **atoi** stringi tamsayıya sayıya çevirir  
 **atol** stringi long tipinde tamsayıya sayıya çevirir  
 **atof** stringi reel sayıya çevirir  
 **itoa** tamsayıyı stringe çevirir  
 **div** iki tamsayıyı bölme işleminde kullanılır  
 **max ve min** iki tam sayıdan büyük ve küçük olanı verir  
 **rand** rastgele sayı üretir  
 **random** verilen değerler arasında ratgele tamsayı üretir  
 **randomize** random sayı üreticisi başlatır  
 **exit** programı sonlandırır
