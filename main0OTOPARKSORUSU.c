#include <stdio.h>
#include <stdlib.h>

/* 0-4 saat:10TL  5-8 saat:12TL  9-12 saat:15TL  13++ saat:20TL
klavyeden otoparkta ka� saat kald��� girilen arac�n �demesi gereken tutar� hesaplayan program */

int main() {
	
	int saat;
	
	printf("Kac Saat Kaldiniz: ");
	scanf("%d",&saat);
	
	
	if(saat>0  &&  saat<=4)
	{
		printf("Toplam Borcunuz: 10TL ");
	}
	
	
	else if(saat>4  &&  saat<=8)
	{
		printf("Toplam Borcunuz: 12TL ");
	}
	
	
	else if(saat>8  &&  saat<=12)
	{
		printf("Toplam Borcunuz: 15TL ");
	}
	
	
	else
	{
		printf("Toplam Borcunuz: 20TL ");
	}
	
	
	return 0;
}
