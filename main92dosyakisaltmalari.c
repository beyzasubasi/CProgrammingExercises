#include <stdio.h>
#include <stdlib.h>

/* DOSYA KISALTMALARI 
   IO: input ve outputtan gelir
   input: giriþ
   output: çýkýþ
   file(f): dosya
   put: yazdýrma
   open: açma
   f open: dosya açma komutu
   close: kapatma
   write(w): yazma
   read(r): okuma
   add(a): ekleme         */
    

int main() {
	
	FILE *dosya;  //*: göstericidir(pointer) ismi ne? dosya
	dosya=fopen("C:\\Kullanýcýlar\\BEYZA\\yeni.text","w"); //dosyanýn formatý nedir?  komutu: fopen yani açma
	                                                                // file türündeki göstericinin 2 parametre tutmasý gerekir
	                                                                // 1.parametre adresi tutar 2.parametre bunun görevini tutar(okuma yazma eklme dosyasý vs)
	
	//komutun adres olduðunu belirlemem için çift slash eklemem gerek
	
	// HATA ALIYORUMMM????
	// tek slash çift slash farký??
	
	return 0;
}
