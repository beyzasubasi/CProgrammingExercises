#include <stdio.h>
#include <stdlib.h>
 // bir yapýnýn pointer olup olmadýgýný nasýl anlarýz? 
 // deðiþkenin önünde eger (*) sembolu varsa bu onun bir gösterici oldugunu ve bellek adresi tutacagýný bildirir
 //

int main() {
	
	int sayi=20;
	int *s=&sayi;                  //bir pointer deðiþkeni oluþturduk bu deðiþken s, sayýnýn bellek adresinin tutucak
	
	//SAYIYI EKRANA YAZDIRMA
	printf("Deger: %d\n",sayi);
	

	
	//ADRESÝ EKRANA YAZDIRMA
	printf("Adres: %x\n",s);        // sayi adlý deðiþkenin adresini yazdýrýcak
	                                // adresi tanýmladýðým deðiþken s oldugu için s yazdýrdým
	
	
	char harf='a';                  
	char *h=&harf;                  //h bir pointer ve harften gelen adres h ye atanýr
	
	
	printf("\n\n----------\n\n");
	
	
	
	//HARFÝ EKRANA YAZDIRMA
	printf("Harf: %c",harf);        
	printf("Adres: %x",h);           // h deðiþkeninden gelen adres
	
	
	
	
	return 0;
}
