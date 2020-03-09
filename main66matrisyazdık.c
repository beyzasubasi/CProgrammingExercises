#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// int dizi[x][y]  ----->  x satýr - y sütun sayýsýdýr

int main( ) {
	
	int dizi[2][2];  // 2 satýr ve 2 sütundan oluþan dizi oluþtur dedik
	
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	printf("Matrisin 0-0 da Bulunan Elemani:%d \n",dizi[0][0]);
	printf("Matrisin 0-1 de Bulunan Elemani:%d \n",dizi[0][1]);
	printf("Matrisin 1-0 da Bulunan Elemani:%d \n",dizi[1][0]);
	printf("Matrisin 1-1 de Bulunan Elemani:%d \n",dizi[1][1]);
	
	
	
	
	return 0;
}
