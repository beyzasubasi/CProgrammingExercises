#include <stdio.h>
#include <stdlib.h>

/* bir bakteri t�r� her saat ba�� kendini 2ye b�lerek �o�al�r, bu labda 24 saat sonra ka� tane bakteri olur? */
// 2 4 8 16 32 64 128 256 512 1024 
int main() {
	
	int i;
	int bakterisayisi=1;
	
	for(i=1;i<=24;i++)
	{
		bakterisayisi=bakterisayisi*2;
		
		printf("%d",bakterisayisi);
	}
	

	
	
	
	
	
	
	
	
	return 0;
}
