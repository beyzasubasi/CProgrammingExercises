#include <stdio.h>
#include <stdlib.h>

/* klavyeden 0 girilene kadar girilen say�lar� toplayan program */

int main() {
	
	int sayi;
	int toplam=0;
		
		
	
	while(sayi!=0)
	{
		printf("Sayi Giriniz: ");
		scanf("%d",&sayi);
		
		toplam=toplam+sayi; 	
	}
		printf("Toplam: %d",toplam);
	
	return 0;
}
