#include <stdio.h>
#include <stdlib.h>

/*   2 1 0 0 2 1 1 2 1 0   2> galibiyet  (3 PUAN)  tak�m�n k�me d��memesi i�in 12 puan almas� gerekli. 10hafta sonunda k�mede kal�p kalmad�klar�n� puan ile birlikte yazd�ran program yaz�n�z.
      10 HAFTALIK MA�      1> ma�lubiyet (0 PUAN)  i�lemler dizi kullanarak ger�ekle�tirilecektir  
        �STAT�ST���        0> berabere   (1 PUAN)                                                                                                                         */
						 

int main() {
	
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i,puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		
		else if(skor[i]==0)
		{
			puan=puan+1;
		}
	}
	
	if(puan>=12)
	{
		printf("PUANINIZ:%d \nKUME DUSMEDINIZ AQ COCUKLARI SEVININ!",puan);
	}
	
	else
	{
		printf("LIGTEN DUSTUNUZ AQ COCUKLARI!",puan);
	}
	
	return 0;
}
