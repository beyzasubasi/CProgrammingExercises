#include <stdio.h>
#include <stdlib.h>

/* Strcat = scanla klavyeden aldýðýmýz verileri birleþtirmek için kullanýlýr  */

int main() {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("Kitap Adi ve Yazari Girin: ");
	scanf("%s%s",kitapad,yazar);                // kitapad yazar vs terimlerini ctrl boþluk ile de bastýrabilirsin
	
	strcat(kitapyazar,kitapad);                 // kitapyazarla kitapadý birleþtir
	strcat(kitapyazar," ");                     // kitapyazarla boþlugu birleþtir
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);                   // kitapyazarla yazarý birleþtir
	
	
	printf("\n\n");
	printf("%s",kitapyazar);
	
	
	//düzgün çalýþmýyooooooo!!!!!!!!!!!
	

	
	return 0;
}
