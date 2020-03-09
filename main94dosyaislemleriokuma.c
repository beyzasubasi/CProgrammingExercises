#include <stdio.h>
#include <stdlib.h>

/* get: okuma, alma
   EOF(End Of File): dosya sonu */

int main() {
	
	FILE *belge;
    char karakter;
    belge=fopen("C:\\Users\\BEYZA\\Desktop\\upps2.txt","r");  // "r" dosyamýn modu
	
	do
	{	
	karakter=getc(belge);        //getc içine göstericinin ismi yazýlýr
	
	printf("%c",karakter);       //okunanlarý yazdýrýyoruz character oldugu için %c kullandýk
	}                             // yani characterden gelen verileri yazdýrýcak
	                             // verinin sadece ilk harfini yazdýrdý hepsini nasýl yazdýracaðýz?
	                             //EOF dosyanýn son karakterine kadar götürmek için kullanacaðýz
	
	while(karakter!=EOF);          // eðer karakter dosyanýn sonuna(EOF) geldiyse çýkýþ yap demek
	                               //dowhile döngüsünde while dan sonra ; koyulur neden?
	                              //çünkü eðer bu farklýysa iþlemi sonlandýrýr devam etmez
	                            // programda nasýl yazýldýysa metni aynen aktarýr
	fclose(belge);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
