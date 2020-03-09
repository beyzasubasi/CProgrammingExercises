#include <stdio.h>
#include <stdlib.h>

/* enum = 81ilin plakasýný kullanýrken switch case çok uzun sürer enum bu gibi sorularýn daha pratik yapýlamsýný saðlar
        genelde main in üstünde tanýmlanýr
                                                */

    enum sehirler
    {
    	bossehir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	};


    int main() {
    	
    	enum sehirler il;
    	il=aydin;
    	printf("%d",il);            // dizilerde index deðeri saymaya 0dan baþladýðý için baþýna bi 0.sehir yazarsak istediðimiz cevabý alýrýz
	    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
