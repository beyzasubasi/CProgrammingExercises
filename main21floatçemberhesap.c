#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* cemberde alan: pi*r*r*/
/* cemberde cevre: 2*pi*r*/

int main() {
	
	float yaricap,pi,cevre,alan;
	
	pi=3,14;
    printf("yaricap giriniz: ");
	scanf(" %f ",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	
	printf("cemberin alani: %f \n",alan);
	printf("cemberin cevresi: %f \n",cevre);
	 
	
	// float fonksiyonunda klavyeden girdi de tam say� kullanamaz m�y�z? //
	//ondal�kl� say�lar virg�l ile ayr�l�yor, noktay� kabul etmiyor?//
	
	return 0;
}
