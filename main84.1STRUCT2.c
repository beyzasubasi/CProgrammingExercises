#include <stdio.h>
#include <stdlib.h>

/* ��rencilerin kay�tlar�n�n tutuldugu bir program yapal�m */

    struct kayit
    {
    	char ad[20];
    	int no;
    	int sinif;
    	float ort;
	};
	
	struct kayit ogr;
	

    int main() {
    	
		printf("Ad Soyad: ");
    	scanf("%s",&ogr.ad);      //og yazd�k ctrl bo�luk yapt�k ogr structt�r�ndan neyi alaca��m�z� soruyor
	    
		printf("Numara: ");
	    scanf("%d",&ogr.no);
	    
	    printf("Sinif: ");
	    scanf("%d",&ogr.sinif);
	    
	    printf("Ortalama: ");
	    scanf("%f",&ogr.ort);
	    
	    
	    printf("%s\n",ogr.ad);
	    printf("%d\n",ogr.no);
	    printf("%d\n",ogr.sinif);
	    printf("%f",ogr.ort);
	    

	
	return 0;
}
