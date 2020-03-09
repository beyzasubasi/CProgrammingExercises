#include <stdio.h>
#include <stdlib.h>

//  2satır(i) 3sutundan(j) oluşur 
// 9> kümede SATIRLAR sırasıyla yazılır, 10 20 30 ilk satır - 40 50 60 ikinci satır olarak verilir

int main() {
	
	int matris[2][3]={10,20,30,40,50,60};  
	
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
