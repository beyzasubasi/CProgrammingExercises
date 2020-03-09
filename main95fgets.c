#include <stdio.h>
#include <stdlib.h>

/* fgets(file gets): verilerin topluca okunmas�
   
   3 durumda sonlan�r
   1)belirtilen say�da karakter okuduktan sonra sonland�r�r
   2)yeni sat�r karakteriyle kar��la�t���nda sonland�r�r
   3)dosya sonuna geldi�inde sonlan�r     
   
   fgets() in syntx� 3parametreden olu�ur
   1.parametre yaz�lanlar�n atanaca�� de�i�ken  
   2.parametre ka� karakter alaca��(max okunacak karakter say�s�)
   3.parametre dosya yolu                */

   
int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge=fopen("C:\\Users\\murat\\Desktop\\bilgi2.txt","r");
	
	fgets(karakter,15,belge);
	puts(karakter);              
	fclose(belge);              //belgeyi kapats�n �ALI�MIYOOOOOO//
	                 
	
	return 0;
}
