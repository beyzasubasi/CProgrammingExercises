#include <stdio.h>   // bunlar processor komutlar�d�r //
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47


/*  processor : program derlenmeden �nce (main k�sm�ndan �nce) kendi ilgili komutlar�n� okur sonra i�lemleri yapar
                 # (diyez) sembolu varsa �ni�lemci komududur 
	define : b�t�n program i�inde ge�erli olabilecek tan�mlama yapmam�za olanak sa�lar */

int main() {
	
	int Turkce,Matematik;
	printf("Turkce Netiniz: ");
	scanf("%d",&Turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%d",&Matematik);
	
	float SozelPuan,SayisalPuan;
	
	SozelPuan=Turkce*puan+Matematik*puan2+50.25;
	SayisalPuan=Turkce*puan+Matematik*puan2+51.45;
	
	printf("Toplam Sozel Puaniniz: %5.2f  \n",SozelPuan);
    printf("Toplam Sayisal Puaniniz: %5.2f  \n",SayisalPuan);
	
	
	
	return 0;
}
