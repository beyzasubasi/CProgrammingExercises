#include <stdio.h>
#include <stdlib.h>

/* yazilim evinde kýþ mevsiminden 320 kiþi kalmýþtýr, ilkbaharda kýþ mevsiminin 4te 1i, yaz mevsiminde ilkbaharýn 8katý ve sonbaharda yaz mevsiminin 10da 1i kadar kiþi aldýðýna göre
 bu otelde 1yýl içinde toplam kaç kiþikalmýþtr?*/

int main() {
	
	int yaz,kis,ilkbahar,sonbahar,toplam;
	kis=320;
	ilkbahar=kis/4;
	yaz=ilkbahar*8;
	sonbahar=yaz/10;
	
	toplam=yaz+kis+sonbahar+ilkbahar;
	
	printf("Toplam Konaklayan Kisi Sayisi: %d",toplam);
	
	return 0;
}
