#include <stdio.h>
#include <stdlib.h>

/* 1+5+9+13+...+81 dizisinin toplam�n� bulan program */

int main() {
	
	int i;
	int toplam=0;
	
	for(i=1;i<=81;i+=4)
	{
		toplam=toplam+i;
		
	}
	
	
	
	printf("Toplam: %d",toplam);
	
	
	
	
	
	return 0;
}
