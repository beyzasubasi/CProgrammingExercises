#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*ygs 1 puan t�r� hesaplama*/

/*t�rk�e: 1.999
/matematik: 3.998
/*sosyal:1
/*fen:2.999
/*taban:100.160*/

int main() {
	
    float turkce,matematik,sosyal,fen,taban,toplampuan;
 
	taban=100.160;
    printf("turkce netiniz: ");
	scanf(" %f ",&turkce);
	
	printf("matematik netiniz: ");
	scanf(" %f ",&matematik);
	
	printf("sosyal netiniz: ");
	scanf(" %f ",&sosyal);
	
	printf("fen netiniz: ");
	scanf(" %f ",&fen);
	
	toplampuan=1.999*turkce+3.998*matematik+1*sosyal+2.999*fen+taban;
	
	printf("YGS1 turunde sonucunuz: %f",toplampuan);
	
	//neden ��kt� al�rken ilkini yazd�r�nca duruyor? arada ba�ka bir ifade girince di�erleri ��k�yo?//
	//hepsine 40 gir dene//
	return 0;
}
