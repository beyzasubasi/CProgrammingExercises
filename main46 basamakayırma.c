#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 3basamakl� say�y� basamaklar�na ay�ran program //

int main() {
	
	int sayi,birler,onlar,yuzler;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	printf("yuzler basamagi: %d\n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("onlar basamagi: %d\n",onlar);
	
	birler=sayi%10;
	printf("birler basamagi: %d",birler);
	

	
	
	return 0;
}
