#include <stdio.h>
#include <stdlib.h>

/* enum = 81ilin plakas�n� kullan�rken switch case �ok uzun s�rer enum bu gibi sorular�n daha pratik yap�lams�n� sa�lar
        genelde main in �st�nde tan�mlan�r
                                                */

    enum sehirler
    {
    	bossehir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	};


    int main() {
    	
    	enum sehirler il;
    	il=aydin;
    	printf("%d",il);            // dizilerde index de�eri saymaya 0dan ba�lad��� i�in ba��na bi 0.sehir yazarsak istedi�imiz cevab� al�r�z
	    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
