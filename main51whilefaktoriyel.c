#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// girilen say�n�n faktoryelini while ile bulan kod 1 1 azaltarak//


int main() {
	
	int sayi,faktoryel;
	faktoryel=1;
	sayi=5;
	 
	while(sayi>1)
	{
	  faktoryel=faktoryel*sayi;
	  sayi--;
	 }
	printf("sonucu: %d",faktoryel);
 	
	// sayi5 faktoryel1, 5 1den b�y�k m� evet, o zaman d�ng� i�ine gir,faktoryel 1di //
	// 1*5=5 faktoriyelin yeni de�eri oldu, sayiyi 1 azalt 4oldu, 4 1den b�y�k m� evet //
	// bla bla devam eder // 
	
	
	
	
	return 0;
}
