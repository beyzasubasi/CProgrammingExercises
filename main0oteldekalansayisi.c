#include <stdio.h>
#include <stdlib.h>

/* yazilim evinde k�� mevsiminden 320 ki�i kalm��t�r, ilkbaharda k�� mevsiminin 4te 1i, yaz mevsiminde ilkbahar�n 8kat� ve sonbaharda yaz mevsiminin 10da 1i kadar ki�i ald���na g�re
 bu otelde 1y�l i�inde toplam ka� ki�ikalm��tr?*/

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
