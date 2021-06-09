#include <stdio.h>

int main (){
	char a,b,c;
	printf("Masukkan huruf ke-1: ");
	scanf ("%c", &a);
	printf("Masukkan huruf ke-2: ");
	scanf (" %c", &b);
	printf("Masukkan huruf ke-3: ");
	scanf (" %c", &c);
	if ((a!='a'||a!='i'||a!='e'||a!='u'||a!='o')&&
		(b=='a'||b=='i'||b=='e'||b=='u'||b=='o')&&
		(c!='a'||c!='i'||c!='e'||c!='u'||c!='o')){
			printf("Konsonan-vokal-konsonan");
		}else {
			printf ("Bukan konsonan-vokal-konsonan");
		}
	
	return 0;
}