#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// istedi�in yerden baslayan istedi�in kadar artan ve istedi�in yerde bitip onlar� toplayan kod//
int main() {
	
	
	int i,kactan,kacar,kaca,toplam=0;
	
	printf("Kactan baslasin? ");
	scanf("%d",&kactan);
	
	printf("Kaca kadar saysin? ");
	scanf("%d",&kaca);
	
	printf("Kacar kacar gitsin?");
	scanf("%d",&kacar);
	
	for(i=kactan;i<=kaca;i+=kacar)
	{
		printf("%d\n",i);
		toplam=toplam+i;
	}
	    printf("Girmis oldugunuz sayilarin toplami: %d\n",toplam);
	
	
	return 0;
}
