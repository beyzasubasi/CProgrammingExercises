#include <stdio.h>
#include <stdlib.h>

// klavyeden al�nan boy degerine g�re dik ��gen olu�turma //

int main() {
	
	int i,j,boy;
	
	printf("Boy Degeri Giriniz: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}
