#include <stdio.h>
#include <stdlib.h>

/* typedef(tip tan�mlama)= typdef kullan�nca yap�m�z i�in yeni de�i�ken tan�mlarken structer kullanmam�za gerek kalmaz                                                                     */
// type definication //                      


    typedef int tamsayi;  // tamsayi art�k integar�n yerini tutucak
	                      // int ts  yerine  tamsayi ts olarak kullan�l�cak
	
	
	int main() {
	
	tamsayi ts;
	ts=22;
	
	tamsayi ts2,ts3;      // ayn� anda 1den fazla de�i�ken tan�mlay�p yazd�rabiliriz
	ts2=23;
	ts3=25;
	printf("%d %d %d",ts,ts2,ts3);

	
	
	
	
	return 0;
}
