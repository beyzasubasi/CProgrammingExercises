#include <stdio.h>
#include <stdlib.h>

/* girilen en boy deðerine göre dörtgen çizdirme */

    void dortgen(int kisa,int uzun)      // aritmetik iþlem yapýp geriye deger döndürmeyeceði için void yaptýk
    {                                    // (int kisa,uzun) yapýlamaz fonk içindeki deðiþkenlerin parametrelerinin ayrý ayrý belirtilmek zorunda syntx hatasý verir
        int i,j;
		for(i=0;i<uzun;i++)	
		{
			for(j=0;j<kisa;j++)
			{
				printf("*");
			}
			printf("\n");                // j döngüsünün her dýþýn çýktýðýnda da bir boþluk býraksýn
		}
	}

    
	int main() {
    	
   
    	dortgen(6,10);
	
	
	return 0;
}
