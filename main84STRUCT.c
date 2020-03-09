#include <stdio.h>
#include <stdlib.h>

/* STRUCT = kendi arasýnda mantýksal iliþki bulunan ifadeler
            genelde main in üstünde tanýmlanýr 
            struct yapý demektir */
            
    struct kitapbilgi
	{
		char kitapad[20];   // buranýn sýrasý çooookk önemlii !!!
		char yazar[20];
		int fiyat;
		float puan;
	};          
            
    int main() {
    	
    struct kitapbilgi kb={"Fahrenheit 451","Ray Bradbury",10,7.25};	 // kb isimli bir deðiþken ürettik ve buna sýrasýyla atama yapacaðýz
    
	printf("Kitap Ad: %s\n",kb.kitapad);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Puan: %.2f",kb.puan);    // virgülden sonra sadece 2 karakter kullansýn dedik
	                                 // %f yapsaydýk virgülden sonra 5 karakter daha alýcaktý
	
	
	return 0;
}
