#include <stdio.h>
#include <stdlib.h>

/* GER�YE DE�ER D�ND�RMEYEN FONK: sadece ��kt� al�caksak, yazd�rma i�lemi yap�caksak bunu kullan�r�z
   VOID: geriye de�er d�nd�rmeyen fonk i�in anahtar kelimemizdir    
   void listele()  --> parantezi a��p kap�yorum ki bunun fonk old programa bildirdim         */



void listele()                  // listele isminde bi fonk olu�turdum de�erlerimi bu fonk i�ine at�yorum
{
	printf("Beyza Subasi\n");   
	printf("Ceydanur Ilhan\n");
	printf("Elif Celik");
}


int main() {
	
	listele();                   // listeleyi �a��rd�m
	                             
								 // Printfleri normal �ekilde de yazd�rabilirdik neden fonk kulland�k?
	                             //    bir projede baz� alanlar�n pek �ok yerde tekrar etmesi gerekebilir
	                             //    s�rekli s�rekli printf kullanmak yerine fonk ile dire �a��r�labilir
	
	
	
	return 0;
}
