#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// break: bu komut k�r demek yani bunu yaz ve ��k devam etme anlam� katar //



int main() {
	
	int sayi;
	printf("Lutfen ay numarasi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("ocak"); 
		break;
		case 2:printf("subat"); 
		break;
		case 3:printf("mart"); 
		break;
		case 4:printf("nisan"); 
		break;
		case 5:printf("mayis"); 
		break;
		case 6:printf("haziran"); 
		break;
		case 7:printf("temmuz"); 
		break;
		case 8:printf("agustos");
		break;
		case 9:printf("eylul"); 
		break;
		case 10:printf("ekim"); 
		break;
		case 11:printf("kasim"); 
		break;
		case 12:printf("aralik"); 
		break;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
