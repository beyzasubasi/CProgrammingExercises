#include <stdio.h>
#include <stdlib.h>

  int kupbul(int sayi)
  {
  	int sonuc=sayi*sayi*sayi;
  	return sonuc;
  }

  int main() {
  	
  	int s;
  	printf("Sayiyi Girin: ");
  	scanf("%d",&s);
  	printf("\n\nSonuc: %d",kupbul(s));      // kupbul fonk i�ine s belirledi�imiz de�i�keni koyar�z
  	
	
	
	
	return 0;
}
