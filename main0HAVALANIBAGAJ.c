#include <stdio.h>
#include <stdlib.h>

//  her yolcunun    el için 8 kg                       el hakkýný geçerse kg baþýna 4 TL                       klavyeden el ve bagaj kg agýrlýgýný giren yolcunun ödemesi gereken bagaj ücreti?
//                  bagaj için 15kg  hakký vardýr      normal hakkýný gecerse kg baþýna 5 TL ödeme yapýlýr  

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
