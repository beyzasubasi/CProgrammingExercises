#include <stdio.h>
#include <stdlib.h>

/*  gets : al�r           bu komutlar klavyeden girilen t�m veriyi( bo�luklu dahi olsa t�m c�mleyi) yazd�rmaya yarar
    puts : yerle�tirir      


	scanf klavyeden girilen verinin sadece ilk space ine kadar olan yerini yazd�r�r bo�luk tu�undan sonras�n� yazd�rmaz     */

int main() {
	
	
	char bilgi[40];
	
	printf("Bilgiyi Girin: ");
	
	
	
	gets(bilgi);
	
	printf("\n\n");
	
	puts(bilgi);
	
	
	
	

	
	
	
	return 0;
}
