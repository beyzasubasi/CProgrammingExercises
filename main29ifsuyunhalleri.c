#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//klavyeden girilen dereceye g�re suyun durumunu yazd�ran kod//

int main() {
	
	int su;
	
	printf("Derece giriniz:");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("su buz halinde");
	}
	
	if(su>0 && su<100)
	{
		printf("su sivi halde");
	}
	
	if(su>=100)
	{
		printf("su buhar halinde");
	}
	
	
	return 0;
}
