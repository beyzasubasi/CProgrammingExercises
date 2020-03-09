#include <stdio.h>
#include <stdlib.h>

/*   2 1 0 0 2 1 1 2 1 0   2> galibiyet  (3 PUAN)  takýmýn küme düþmemesi için 12 puan almasý gerekli. 10hafta sonunda kümede kalýp kalmadýklarýný puan ile birlikte yazdýran program yazýnýz.
      10 HAFTALIK MAÇ      1> maðlubiyet (0 PUAN)  iþlemler dizi kullanarak gerçekleþtirilecektir  
        ÝSTATÝSTÝÐÝ        0> berabere   (1 PUAN)                                                                                                                         */
						 

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
