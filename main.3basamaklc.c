#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen 3 basamakl� bir say�n�n rakamlar� toplam�n� bulan program */

int main() {
	
	int birler,onlar,yuzler,toplam,sayi;
	
	printf("Sayi:");
	scanf("%d",&sayi);
	
	birler=sayi%10;
	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	
	toplam=birler+yuzler+onlar;
	
	printf("Toplam: %d",toplam);
	
	return 0;
}
