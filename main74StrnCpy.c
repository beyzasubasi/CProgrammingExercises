#include <stdio.h>
#include <stdlib.h>

/* strncpy= yukarıdakinin yanında bir de kopyalanacak ifadenin uzunlugu tutulur */

int main() {
	
	char nereden[30]="Merhaba Beyzi";  //
	char nereye[30]="";
	
	strncpy(nereye,nereden,10);        // n > ilk 10 karakter demek
	printf("%s",nereye);	
	
	
	
	return 0;
}
