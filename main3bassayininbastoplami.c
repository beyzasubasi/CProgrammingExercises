#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen 3 basamakli bir sayinin rakamlarýnýn toplamýný bulan program */

int main() {
	
	int sayi,birler,onlar,yuzler,toplam;
	
	printf("Lutfen Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	birler=sayi%10;              
	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	
	toplam=birler+yuzler+onlar;
	
	printf("Basamaklari Toplami: %d",toplam);

	
	
	return 0;
}
