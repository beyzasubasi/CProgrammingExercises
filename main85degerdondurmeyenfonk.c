#include <stdio.h>
#include <stdlib.h>

/* GERÝYE DEÐER DÖNDÜRMEYEN FONK: sadece çýktý alýcaksak, yazdýrma iþlemi yapýcaksak bunu kullanýrýz
   VOID: geriye deðer döndürmeyen fonk için anahtar kelimemizdir    
   void listele()  --> parantezi açýp kapýyorum ki bunun fonk old programa bildirdim         */



void listele()                  // listele isminde bi fonk oluþturdum deðerlerimi bu fonk içine atýyorum
{
	printf("Beyza Subasi\n");   
	printf("Ceydanur Ilhan\n");
	printf("Elif Celik");
}


int main() {
	
	listele();                   // listeleyi çaðýrdým
	                             
								 // Printfleri normal þekilde de yazdýrabilirdik neden fonk kullandýk?
	                             //    bir projede bazý alanlarýn pek çok yerde tekrar etmesi gerekebilir
	                             //    sürekli sürekli printf kullanmak yerine fonk ile dire çaðýrýlabilir
	
	
	
	return 0;
}
