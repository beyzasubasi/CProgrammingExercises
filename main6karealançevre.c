#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Karenin alan ve �evresi
	//De�er: Bir kenar
	//Alan: Kenar * Kenar
	//�evre: kenar *4
	
	int kenar,alan,cevre;
	kenar=10;
	alan=kenar*kenar;
	cevre=kenar*4;
	
	printf("Alan: %d\n",alan);
	printf("Cevre: %d",cevre);
	
	return 0;
}
