#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 

//dikd�rtgen alan ve �evresi
//de�er: k�sa kenar, uzun kenar
//alan: k�sakenar*uzunkenar
//�evre: k�sakenar+k�sakenar+uzunkenar+uzunkenar



{
	int kisa,uzun,kenar,alan,cevre;

kisa=8;
uzun=12;
alan=kisa*uzun;
cevre=2*(kisa+uzun);

printf("dikdortgenin alani: %d\n",alan);
printf("dikdortgenin cevresi: %d",cevre);

	
	
	
	
	return 0;
}
