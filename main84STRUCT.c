#include <stdio.h>
#include <stdlib.h>

/* STRUCT = kendi aras�nda mant�ksal ili�ki bulunan ifadeler
            genelde main in �st�nde tan�mlan�r 
            struct yap� demektir */
            
    struct kitapbilgi
	{
		char kitapad[20];   // buran�n s�ras� �ooookk �nemlii !!!
		char yazar[20];
		int fiyat;
		float puan;
	};          
            
    int main() {
    	
    struct kitapbilgi kb={"Fahrenheit 451","Ray Bradbury",10,7.25};	 // kb isimli bir de�i�ken �rettik ve buna s�ras�yla atama yapaca��z
    
	printf("Kitap Ad: %s\n",kb.kitapad);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Puan: %.2f",kb.puan);    // virg�lden sonra sadece 2 karakter kullans�n dedik
	                                 // %f yapsayd�k virg�lden sonra 5 karakter daha al�cakt�
	
	
	return 0;
}
