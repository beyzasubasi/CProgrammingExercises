#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen birbirlerinden farklý 2 sayý arasýndaki(bu 2 sayý da dahil) tamsayýlarýn toplamýný ekrana yazdýr*/

int main() {
	
	int i,sayi1,sayi2,buyuk,kucuk;
	int toplam=0;

    yeniden:
	printf("1.Sayiyi Yazdirin:");
    scanf("%d",&sayi1);
    
    printf("2.Sayiyi Yazdirin:");
	scanf("%d",&sayi2);    
    
    if(sayi1==sayi2)
    {
    	printf("MAALESEF AYNI SAYIYI YAZDIRAMAZSINIZ!\n");
    	goto yeniden;
	}
	
	else
	{
		if(sayi1>sayi2)
		{
		buyuk=sayi1;
		kucuk=sayi2;
	    }
	
	    else
	    {
		kucuk=sayi1;
		buyuk=sayi2;
	    }
    }
	
	
	for(i=kucuk;i<=buyuk;i++)
	{
		toplam=toplam+i;
	}
	
	printf("Toplam: %d",toplam);
	
	

	return 0;
}
