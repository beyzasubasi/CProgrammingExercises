#include <stdio.h>
#include <stdlib.h>

/*   g�sterici bellekte kendinden �nceki ve sonraki adresleri g�stersin                                                                                         */
int main() {
	
	
	char harf='k';                            
	char *pt=&harf;            // pt: pointer
	
	
	printf("Adres: %x\n",pt);  //62fe47
	
	pt++;                                        // pt yi 1 artt�rd�k                  
	
	printf("Adres2: %x\n",pt); //62fe48
	
	pt--;                                        // pt yi 1 azaltt�k(son de�er neyse ona g�re art�r�l�p azalt�l�r)
	
	printf("Adres3: %x\n",pt);   //62fe47
	
	
	pt=pt+5;
	printf("Adres4: %x",pt);   //62fe4c          // 10un kar��l���: a
	                                             // 11in kar��l���:b
	                                             // 12nin kar��l���:c old i�in 52 yerine c yaz�ld�
	
	return 0;
}
