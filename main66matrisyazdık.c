#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// int dizi[x][y]  ----->  x sat�r - y s�tun say�s�d�r

int main( ) {
	
	int dizi[2][2];  // 2 sat�r ve 2 s�tundan olu�an dizi olu�tur dedik
	
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
