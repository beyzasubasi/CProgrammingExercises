#include <stdio.h>
#include <stdlib.h>

/* ge�en derste dosya olu�turduk bu derste dosyan�n i�ini dolduraca��z bi sonrakinde i�i dolmu� dosyay� okuyaca��z sonra bunu ku�uk bi kay�t program� haline getiricez*/

int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\BEYZA\\Desktop\\upps2.txt","w");
	
	putc('a',dosya);           // 2parametre mevcuttur
	                           // 1.parametre verinin kendisidir(tek t�rnak i�inde)
	                           // 2.parametre bunun hangi dosyaya kaydolaca��(dosya de�i�keninin i�ine kaydolur)
	
	putc('\n',dosya);          // a alt sat�r b �eklinde yazd�rd�
	putc('b',dosya);
	
	
	fclose(dosya);              // okuma i�lemini kapatmak i�in yazd�k
	
	
	
	return 0;
}
