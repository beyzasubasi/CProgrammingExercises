#include <stdio.h>
#include <stdlib.h>

/* kullan�c�dan al�nan 4tamsay�n�n toplam� */

int main() {
	
	int i,sayi;
	int toplam=0;
	
	
	for(i=1;i<=4;i++)
	{
		printf("%d.Sayi: ",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	
		printf("Toplam:%d \n",toplam);

	
	return 0;
}
