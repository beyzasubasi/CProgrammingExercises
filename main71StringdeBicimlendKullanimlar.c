#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitap[40];
	
	
	printf("Kitabin Adi: ");
	scanf("%s",kitap);          // scan oldugu i�in tek kelime yaz�lmal�
	

	
	printf("%s",kitap);         // mesaj oldu�u gibi yaz�l�r
	
	printf("\n");                  
	
	printf("%18s",kitap);       // sol taraftan 18karakter kullan�ls�n (bosluklar+kitap ad�)
	                            // kitap ad�: inci olsun ..............inci > 18karakter kullan�ld�
	printf("\n");
	
	printf("%20.5s",kitap);      // 20karakter kullan�ls�n ve klavye verisinin sadece ilk 5karakterini kullans�n
		                         // kitap ad�: kar�ncalar  ................kar�n > 15bo�luk ve 5 karakter
    printf("\n");
    
    printf("%-20s",kitap);       // 20karakter kullan�ls�n ama sola dayal� olarak diyo

	return 0;
}
