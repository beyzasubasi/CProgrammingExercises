#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitap[40];
	
	
	printf("Kitabin Adi: ");
	scanf("%s",kitap);          // scan oldugu için tek kelime yazýlmalý
	

	
	printf("%s",kitap);         // mesaj olduðu gibi yazýlýr
	
	printf("\n");                  
	
	printf("%18s",kitap);       // sol taraftan 18karakter kullanýlsýn (bosluklar+kitap adý)
	                            // kitap adý: inci olsun ..............inci > 18karakter kullanýldý
	printf("\n");
	
	printf("%20.5s",kitap);      // 20karakter kullanýlsýn ve klavye verisinin sadece ilk 5karakterini kullansýn
		                         // kitap adý: karýncalar  ................karýn > 15boþluk ve 5 karakter
    printf("\n");
    
    printf("%-20s",kitap);       // 20karakter kullanýlsýn ama sola dayalý olarak diyo

	return 0;
}
