#include <stdio.h>
#include <stdlib.h>

/* bir bakteri t�r� her saat ba�� kendini ikiye b�lerek �o�al�r bu labda 24saatin sonunda ka� bakteri bulunur? */

int main() {
	
	int i;
	int bs=1;
	
	for(i=1;i<=24;i++)
	{
		bs=bs*2;       // printf i for d�ng�s�n�n i�ine yazarsam bakteri say�lar�n�n art���n� tek tek s�ralayarak g�sterir sonucu o �ekilde verir
	}
	
	printf("%d \n",bs);  // buraya yazarsam 24saatin sonundaki bakteri say�s�n�n verir
	
	return 0;
}
