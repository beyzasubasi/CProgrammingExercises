#include <stdio.h>
#include <stdlib.h>

/* girilen en boy de�erine g�re d�rtgen �izdirme */

    void dortgen(int kisa,int uzun)      // aritmetik i�lem yap�p geriye deger d�nd�rmeyece�i i�in void yapt�k
    {                                    // (int kisa,uzun) yap�lamaz fonk i�indeki de�i�kenlerin parametrelerinin ayr� ayr� belirtilmek zorunda syntx hatas� verir
        int i,j;
		for(i=0;i<uzun;i++)	
		{
			for(j=0;j<kisa;j++)
			{
				printf("*");
			}
			printf("\n");                // j d�ng�s�n�n her d���n ��kt���nda da bir bo�luk b�raks�n
		}
	}

    
	int main() {
    	
   
    	dortgen(6,10);
	
	
	return 0;
}
