#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* ayl�k 2500tlmaa� alan ki�inin maa��na y�zde 12 zamn yap�l�rs, yeni maa��?*/


int main() {
	
	int maas,zam;
	
	printf("aylik maasiniz: ");
	scanf("%d",&maas);
	
	
	zam=(maas*12/100)+maas;
	
	printf("zamdan sonraki maasiniz: %d",zam);
		
	
	
	return 0;
}
