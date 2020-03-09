#include <stdio.h>
#include <stdlib.h>

/* typedef(tip tanýmlama)= typdef kullanýnca yapýmýz için yeni deðiþken tanýmlarken structer kullanmamýza gerek kalmaz                                                                     */
// type definication //                      


    typedef int tamsayi;  // tamsayi artýk integarýn yerini tutucak
	                      // int ts  yerine  tamsayi ts olarak kullanýlýcak
	
	
	int main() {
	
	tamsayi ts;
	ts=22;
	
	tamsayi ts2,ts3;      // ayný anda 1den fazla deðiþken tanýmlayýp yazdýrabiliriz
	ts2=23;
	ts3=25;
	printf("%d %d %d",ts,ts2,ts3);

	
	
	
	
	return 0;
}
