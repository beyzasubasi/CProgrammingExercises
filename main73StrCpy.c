#include <stdio.h>
#include <stdlib.h>

/* strcpy= bir char i�indeki ifadeyi kopyalay�p alt tarafta yeniden kullanmak i�in haf�zaya alan komut */
int main() {
	
	char kaynak[30]="Merhaba Beyzi";  
	char kopya[30]="";                 // kopyas�            
	
	strcpy(kopya,kaynak);              // kopyay� kaynaga g�nder
	                                   // strcpy nin 2 parametresi vardir ( 1 , 2 ) 
	                                   // 1.si nereye kopyalan�cak?
	                                   // 2.si nereden kopyalan�cak?
	                                   
	
	printf("%s",kopya);                 // kopyay� yazd�rd�k ama kopyan�n i�erisine kaynaktaki veriyi ald�k
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
