#include <stdio.h>
#include <stdlib.h>

/* POINTER(gösterici) = bellek ile program arasýndaki baðlantýyý kurmada kullandýðýmýz yapý 
                        herhangi bir deðiþkenin kendisiyle ya da adresiyle iþlem yapmasýný saðlar 
                        oluþturdugumuz int a deðiskeninin bellekteki adresini verir                             */
/*  ampersand(&)= adres operatörü                                                                               */
 


int main() {
	
	int sayi=10;                    // tanýmlamalarý yazdýk
	int sayi2=10.25;
	double sayi3=10.25;
	char kelime='a';
	                   
	printf(" %d\n",sayi);           //verilerimizi yazdýralým
	printf(" %d\n",sayi2);
	printf(" %f\n",sayi3);
	printf(" %c",kelime);
	
	printf("\n\n Bellek Adresleri \n\n");
	
	printf(" %x\n",&sayi);          // bellek adresleri yuzde kýsmýnda xle alýnýr
	printf(" %x\n",&sayi2);         // bellek adresini alacaðým sembolün önüne ambersand koyulur
	printf(" %x\n",&sayi3);         // çalýþtýðýnda 10 sayýsýnýn bellek adresi bulunur ( 62fe38 )
	printf(" %x",&kelime);          // 
	
	
	
	
	return 0;
}
