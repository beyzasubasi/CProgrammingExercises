#include <stdio.h>
#include <stdlib.h>

  /*  
    *
    **
    ***
    ****
    *****
    *****
    ****
    ***
    **
    *
    yazd�r 
*/  

int main() {
	
	int i,j,k,l;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	for(k=1;k<=5;k++)
	{
		for(l=5;l>=k;k--)
		{
			printf("*");
		}
		
		printf("\n");
	}
		
	return 0;
}
