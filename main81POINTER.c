#include <stdio.h>
#include <stdlib.h>

/* POINTER(g�sterici) = bellek ile program aras�ndaki ba�lant�y� kurmada kulland���m�z yap� 
                        herhangi bir de�i�kenin kendisiyle ya da adresiyle i�lem yapmas�n� sa�lar 
                        olu�turdugumuz int a de�iskeninin bellekteki adresini verir                             */
/*  ampersand(&)= adres operat�r�                                                                               */
 


int main() {
	
	int sayi=10;                    // tan�mlamalar� yazd�k
	int sayi2=10.25;
	double sayi3=10.25;
	char kelime='a';
	                   
	printf(" %d\n",sayi);           //verilerimizi yazd�ral�m
	printf(" %d\n",sayi2);
	printf(" %f\n",sayi3);
	printf(" %c",kelime);
	
	printf("\n\n Bellek Adresleri \n\n");
	
	printf(" %x\n",&sayi);          // bellek adresleri yuzde k�sm�nda xle al�n�r
	printf(" %x\n",&sayi2);         // bellek adresini alaca��m sembol�n �n�ne ambersand koyulur
	printf(" %x\n",&sayi3);         // �al��t���nda 10 say�s�n�n bellek adresi bulunur ( 62fe38 )
	printf(" %x",&kelime);          // 
	
	
	
	
	return 0;
}
