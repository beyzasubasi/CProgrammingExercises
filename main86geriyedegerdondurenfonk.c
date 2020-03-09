#include <stdio.h>
#include <stdlib.h>

/* GERÝYE DEGER DÖNDÜREN FONKSIYONLAR: fonk içinde bazý aritmetik iþlemler yazýp bu iþlemler sonucunda bir
                                        deger elde ediyorsak bu geriye deger döndüren fonkdur  */


    int toplam(int s1,int s2)        //toplam isimli bi fonk oluþturduk
    {                                //parantez içine iþleme sokacagýmýz deðiþkenleri yazarýz
         int s3;                     // (geriye deger döndürüleceði için void yazýlmaz)
		 s3=(s1+s2)*5-10;            // s3 sonucu tutsun ve geriye deðer döndürecek deger yine s3tür (return s3)
		 return s3;                     
    }                                
   
   
    int main() {
	
	int t;
	t=toplam(4,5);                     // 4 s1 i temsil eder, 5 s2 yi temsil eder 
	printf("%d\n",t);                  // t deðiþkeni de s3ü temsil eder
	
	t=toplam(2,3);                     // iþleme sadece sayýlarý deðþtirip devam etmek istiyorsak bu fonk çok iþe yarar
	printf("%d",t);                    
	
	
	
	return 0;
}
