#include <stdio.h>
#include <stdlib.h>

/*   gösterici bellekte kendinden önceki ve sonraki adresleri göstersin                                                                                         */
int main() {
	
	
	char harf='k';                            
	char *pt=&harf;            // pt: pointer
	
	
	printf("Adres: %x\n",pt);  //62fe47
	
	pt++;                                        // pt yi 1 arttýrdýk                  
	
	printf("Adres2: %x\n",pt); //62fe48
	
	pt--;                                        // pt yi 1 azalttýk(son deðer neyse ona göre artýrýlýp azaltýlýr)
	
	printf("Adres3: %x\n",pt);   //62fe47
	
	
	pt=pt+5;
	printf("Adres4: %x",pt);   //62fe4c          // 10un karþýlýðý: a
	                                             // 11in karþýlýðý:b
	                                             // 12nin karþýlýðý:c old için 52 yerine c yazýldý
	
	return 0;
}
