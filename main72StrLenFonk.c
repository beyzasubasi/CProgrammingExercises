#include <stdio.h>
#include <stdlib.h>

/* strlen > string lenght = stringin uzunlugu, girilen karakter dizisinin uzunluðu demektir 
                             girilen karakter sayýsýný bulur (boþluklar da dahildir) */

int main() {
	
	printf("Katar Uzunlugu: %d\n\n",strlen("Hello My Friend"));   //(5+1+2+1+6) 
	
	
	
	// Scanfle de hesaplayabiliriz fakat ilk kelimeden sonrasýný almayacagý için sadece ilk kelimenin uzunlugunu verir
	
	char kelime[100];
	printf("Kelimeyi Girin: ");
	scanf("%s",kelime);
	printf("Katar Uzunlugu: %d",strlen(kelime));
	
	
	
	
	
	return 0;
}
