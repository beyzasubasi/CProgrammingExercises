#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//0 ile 50 aras�nda 5e tam b�l�nen say�lar� listeleyen program//
int main() {
	
	int i;
	
	for(i%5==0;i<50;i+=5)
	{
		printf("%d\n",i);
	}
	
	
	// 0dan ba�layaca��n� belirtmedim ama nas�l 0dan ba�l�yor? //
	
	// int i;
	// for(i=1;i<50;i++)
	// {
	//     if(i%5==0)
	//     {
	//           printf("%d\n",i);
	//      }
	// }
	
	
	
	
	return 0;
}
