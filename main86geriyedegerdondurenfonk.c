#include <stdio.h>
#include <stdlib.h>

/* GER�YE DEGER D�ND�REN FONKSIYONLAR: fonk i�inde baz� aritmetik i�lemler yaz�p bu i�lemler sonucunda bir
                                        deger elde ediyorsak bu geriye deger d�nd�ren fonkdur  */


    int toplam(int s1,int s2)        //toplam isimli bi fonk olu�turduk
    {                                //parantez i�ine i�leme sokacag�m�z de�i�kenleri yazar�z
         int s3;                     // (geriye deger d�nd�r�lece�i i�in void yaz�lmaz)
		 s3=(s1+s2)*5-10;            // s3 sonucu tutsun ve geriye de�er d�nd�recek deger yine s3t�r (return s3)
		 return s3;                     
    }                                
   
   
    int main() {
	
	int t;
	t=toplam(4,5);                     // 4 s1 i temsil eder, 5 s2 yi temsil eder 
	printf("%d\n",t);                  // t de�i�keni de s3� temsil eder
	
	t=toplam(2,3);                     // i�leme sadece say�lar� de��tirip devam etmek istiyorsak bu fonk �ok i�e yarar
	printf("%d",t);                    
	
	
	
	return 0;
}
