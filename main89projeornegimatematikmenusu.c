#include <stdio.h>
#include <stdlib.h>

// matematik program� yaz�lacak tuna05414121554  murat 05312168416

int main() {
	
	printf("******************************************");
	printf("\n***********       MENU       ***********");
	printf("\n");
	printf("1.Toplama Islemi \n");
	printf("2.Carpma Islemi \n");
	printf("3.Kare Bul \n");
	printf("4.Kup Bul \n");
	printf("5.Denklem (5x^2+4x+3)");
	
	
	int s1,s2,sonuc,secim;
	
	printf("\n\n");
	printf("Islem Seciniz: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("Iki Sayi Giriniz: ");
			printf("\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplam: %d",sonuc);
		break;
		
		case 2:
			printf("Iki Sayi Giriniz: ");
			printf("\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpim: %d",sonuc);
		break;
		
		case 3:
			printf("Sayi Giriniz: ");
			printf("\n");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Sayinin Karesi: %d",sonuc);
			break ;
			
		case 4:
			printf("Sayi Giriniz: ");
			printf("\n");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Sayinin Kupu: %d",sonuc);
		break ;
		
		case 5:
		    printf("Sayi Giriniz: ");
		    printf("\n");
			scanf("%d",&s1);
			sonuc=5*s1*s1+4*s1+3;
			printf("Denklem(5x^2+4x+3): %d",sonuc);
		break ;
			
		
		
	}
	
	
	
	return 0;
}
