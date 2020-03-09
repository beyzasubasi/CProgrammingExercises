#include <stdio.h>
#include <stdlib.h>
 // bir yap�n�n pointer olup olmad�g�n� nas�l anlar�z? 
 // de�i�kenin �n�nde eger (*) sembolu varsa bu onun bir g�sterici oldugunu ve bellek adresi tutacag�n� bildirir
 //

int main() {
	
	int sayi=20;
	int *s=&sayi;                  //bir pointer de�i�keni olu�turduk bu de�i�ken s, say�n�n bellek adresinin tutucak
	
	//SAYIYI EKRANA YAZDIRMA
	printf("Deger: %d\n",sayi);
	

	
	//ADRES� EKRANA YAZDIRMA
	printf("Adres: %x\n",s);        // sayi adl� de�i�kenin adresini yazd�r�cak
	                                // adresi tan�mlad���m de�i�ken s oldugu i�in s yazd�rd�m
	
	
	char harf='a';                  
	char *h=&harf;                  //h bir pointer ve harften gelen adres h ye atan�r
	
	
	printf("\n\n----------\n\n");
	
	
	
	//HARF� EKRANA YAZDIRMA
	printf("Harf: %c",harf);        
	printf("Adres: %x",h);           // h de�i�keninden gelen adres
	
	
	
	
	return 0;
}
