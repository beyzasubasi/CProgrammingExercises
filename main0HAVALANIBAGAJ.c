#include <stdio.h>
#include <stdlib.h>

//  her yolcunun    el i�in 8 kg                       el hakk�n� ge�erse kg ba��na 4 TL                       klavyeden el ve bagaj kg ag�rl�g�n� giren yolcunun �demesi gereken bagaj �creti?
//                  bagaj i�in 15kg  hakk� vard�r      normal hakk�n� gecerse kg ba��na 5 TL �deme yap�l�r  

int main() {
	
	int e,b,eltutar,bagajtutar;
	int toplam;
	
	printf("El Bagaji Kilonuz: ");
	scanf("%d",&e);
	
	printf("Normal Bagaj Kilonuz: ");
	scanf("%d",&b);
	
	if(e>8)
	{
		eltutar=(e-8)*4;
	}
	else
	{
		eltutar=0;
	}
	
	
	if(b>15)
	{
		bagajtutar=(b-15)*5;
	}
	else
	{
        bagajtutar=0;		
	}
	
	toplam=eltutar+bagajtutar;
	
	printf("Toplam Ucretiniz:%d ",toplam);
	
	
	
	
	return 0;
}
