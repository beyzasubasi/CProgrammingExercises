#include <stdio.h>
#include <stdlib.h>

/* Strcat = scanla klavyeden ald���m�z verileri birle�tirmek i�in kullan�l�r  */

int main() {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("Kitap Adi ve Yazari Girin: ");
	scanf("%s%s",kitapad,yazar);                // kitapad yazar vs terimlerini ctrl bo�luk ile de bast�rabilirsin
	
	strcat(kitapyazar,kitapad);                 // kitapyazarla kitapad� birle�tir
	strcat(kitapyazar," ");                     // kitapyazarla bo�lugu birle�tir
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);                   // kitapyazarla yazar� birle�tir
	
	
	printf("\n\n");
	printf("%s",kitapyazar);
	
	
	//d�zg�n �al��m�yooooooo!!!!!!!!!!!
	

	
	return 0;
}
