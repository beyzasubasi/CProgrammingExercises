#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*uzun ve k�sa kenar� ondal�kl� olarak girilen dikd�rtgende alan ve �evre hesab�*/


int main() {
	
	float kisakenar,uzunkenar,alan,cevre;
	
	printf("kisa kenari: ");
	scanf(" %f",&kisakenar);
	
	printf("uzun kenari: ");
	scanf(" %f",&uzunkenar);
	
	alan=uzunkenar*kisakenar;
	cevre=(uzunkenar+uzunkenar+kisakenar+kisakenar);
	
	
	printf("dikdortgenin alani: %f \n",alan);
	printf("dikdortgenin cevresi: %f",cevre);
	
	
	
	
	
	return 0;
}
