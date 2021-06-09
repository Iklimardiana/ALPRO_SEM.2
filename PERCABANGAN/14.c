
/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
int main()
{
	
	int o, p, q;	
	int a, b, c;	
	
	printf("Masukkan panjang sisi 1: "); 
	scanf("%d", &o);
	printf("Masukkan panjang sisi 2: "); 
	scanf("%d", &p);
	printf("Masukkan panjang sisi 3: ");
	scanf("%d", &q);	
	
	if (o >= p && o >= q){
		a = q;
		b = p;
		c = o;
	} else if (p >= o && p >= q){
		a = q;
		b = o;
		c = p;
	} else{
		a = o;
		b = p;
		c = q;
	}
	
	
	if (c*c == (b*b + a*a)){
		printf("============================\n");
		printf("Segitiga siku-siku");		
	}else if (c*c > (b*b + a*a)){
		printf("============================\n");
		printf("Segitiga tumpul");
	}else{
		printf("============================\n");
		printf("Segitiga lancip");
	}

	return 0;
}