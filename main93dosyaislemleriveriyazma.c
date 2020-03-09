#include <stdio.h>
#include <stdlib.h>

/* geçen derste dosya oluþturduk bu derste dosyanýn içini dolduracaðýz bi sonrakinde içi dolmuþ dosyayý okuyacaðýz sonra bunu kuçuk bi kayýt programý haline getiricez*/

int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\BEYZA\\Desktop\\upps2.txt","w");
	
	putc('a',dosya);           // 2parametre mevcuttur
	                           // 1.parametre verinin kendisidir(tek týrnak içinde)
	                           // 2.parametre bunun hangi dosyaya kaydolacaðý(dosya deðiþkeninin içine kaydolur)
	
	putc('\n',dosya);          // a alt satýr b þeklinde yazdýrdý
	putc('b',dosya);
	
	
	fclose(dosya);              // okuma iþlemini kapatmak için yazdýk
	
	
	
	return 0;
}
