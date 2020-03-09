#include <stdio.h>
#include <stdlib.h>

/* bir bakteri türü her saat baþý kendini ikiye bölerek çoðalýr bu labda 24saatin sonunda kaç bakteri bulunur? */

int main() {
	
	int i;
	int bs=1;
	
	for(i=1;i<=24;i++)
	{
		bs=bs*2;       // printf i for döngüsünün içine yazarsam bakteri sayýlarýnýn artýþýný tek tek sýralayarak gösterir sonucu o þekilde verir
	}
	
	printf("%d \n",bs);  // buraya yazarsam 24saatin sonundaki bakteri sayýsýnýn verir
	
	return 0;
}
