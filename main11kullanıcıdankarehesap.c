#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*klavyeden girilen karenin kenar�yla �evresini ve alan�n� hesaplama*/


int main() {
	
	int kenar,alan,cevre;
	
	printf("Karede Alan Ve Cevre Hesabi\n\n");
	
	
	printf("Karenin bir kenarini giriniz: ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	cevre=4*kenar;
	
	printf("Karenin alani: %d\n",alan);
	printf("Karenin cevresi: %d\n",cevre);
	
	
	
		return 0;
}
