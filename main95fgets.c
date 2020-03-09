#include <stdio.h>
#include <stdlib.h>

/* fgets(file gets): verilerin topluca okunmasý
   
   3 durumda sonlanýr
   1)belirtilen sayýda karakter okuduktan sonra sonlandýrýr
   2)yeni satýr karakteriyle karþýlaþtýðýnda sonlandýrýr
   3)dosya sonuna geldiðinde sonlanýr     
   
   fgets() in syntxý 3parametreden oluþur
   1.parametre yazýlanlarýn atanacaðý deðiþken  
   2.parametre kaç karakter alacaðý(max okunacak karakter sayýsý)
   3.parametre dosya yolu                */

   
int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge=fopen("C:\\Users\\murat\\Desktop\\bilgi2.txt","r");
	
	fgets(karakter,15,belge);
	puts(karakter);              
	fclose(belge);              //belgeyi kapatsýn ÇALIÞMIYOOOOOO//
	                 
	
	return 0;
}
