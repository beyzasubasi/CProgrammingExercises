#include <stdio.h>
#include <stdlib.h>

/*  gets : alýr           bu komutlar klavyeden girilen tüm veriyi( boþluklu dahi olsa tüm cümleyi) yazdýrmaya yarar
    puts : yerleþtirir      


	scanf klavyeden girilen verinin sadece ilk space ine kadar olan yerini yazdýrýr boþluk tuþundan sonrasýný yazdýrmaz     */

int main() {
	
	
	char bilgi[40];
	
	printf("Bilgiyi Girin: ");
	
	
	
	gets(bilgi);
	
	printf("\n\n");
	
	puts(bilgi);
	
	
	
	

	
	
	
	return 0;
}
