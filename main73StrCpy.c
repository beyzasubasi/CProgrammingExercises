#include <stdio.h>
#include <stdlib.h>

/* strcpy= bir char içindeki ifadeyi kopyalayýp alt tarafta yeniden kullanmak için hafýzaya alan komut */
int main() {
	
	char kaynak[30]="Merhaba Beyzi";  
	char kopya[30]="";                 // kopyasý            
	
	strcpy(kopya,kaynak);              // kopyayý kaynaga gönder
	                                   // strcpy nin 2 parametresi vardir ( 1 , 2 ) 
	                                   // 1.si nereye kopyalanýcak?
	                                   // 2.si nereden kopyalanýcak?
	                                   
	
	printf("%s",kopya);                 // kopyayý yazdýrdýk ama kopyanýn içerisine kaynaktaki veriyi aldýk
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
