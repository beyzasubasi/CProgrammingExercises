#include <stdio.h>
#include <stdlib.h>

/* DOSYA KISALTMALARI 
   IO: input ve outputtan gelir
   input: giri�
   output: ��k��
   file(f): dosya
   put: yazd�rma
   open: a�ma
   f open: dosya a�ma komutu
   close: kapatma
   write(w): yazma
   read(r): okuma
   add(a): ekleme         */
    

int main() {
	
	FILE *dosya;  //*: g�stericidir(pointer) ismi ne? dosya
	dosya=fopen("C:\\Kullan�c�lar\\BEYZA\\yeni.text","w"); //dosyan�n format� nedir?  komutu: fopen yani a�ma
	                                                                // file t�r�ndeki g�stericinin 2 parametre tutmas� gerekir
	                                                                // 1.parametre adresi tutar 2.parametre bunun g�revini tutar(okuma yazma eklme dosyas� vs)
	
	//komutun adres oldu�unu belirlemem i�in �ift slash eklemem gerek
	
	// HATA ALIYORUMMM????
	// tek slash �ift slash fark�??
	
	return 0;
}
