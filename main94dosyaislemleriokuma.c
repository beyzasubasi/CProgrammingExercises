#include <stdio.h>
#include <stdlib.h>

/* get: okuma, alma
   EOF(End Of File): dosya sonu */

int main() {
	
	FILE *belge;
    char karakter;
    belge=fopen("C:\\Users\\BEYZA\\Desktop\\upps2.txt","r");  // "r" dosyam�n modu
	
	do
	{	
	karakter=getc(belge);        //getc i�ine g�stericinin ismi yaz�l�r
	
	printf("%c",karakter);       //okunanlar� yazd�r�yoruz character oldugu i�in %c kulland�k
	}                             // yani characterden gelen verileri yazd�r�cak
	                             // verinin sadece ilk harfini yazd�rd� hepsini nas�l yazd�raca��z?
	                             //EOF dosyan�n son karakterine kadar g�t�rmek i�in kullanaca��z
	
	while(karakter!=EOF);          // e�er karakter dosyan�n sonuna(EOF) geldiyse ��k�� yap demek
	                               //dowhile d�ng�s�nde while dan sonra ; koyulur neden?
	                              //��nk� e�er bu farkl�ysa i�lemi sonland�r�r devam etmez
	                            // programda nas�l yaz�ld�ysa metni aynen aktar�r
	fclose(belge);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
