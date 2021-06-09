
/*
	Author  	:Iklima Mardiana
	Email 		:11iklimardiana9@upi.edu
	Deskripsi  	:program perkalian kode ASCII
*/
#include <stdio.h>
int main()
{
	char a,b;
	a ='A';
	b ='B';
	
	printf("Character kode ASCII 'A' dalam desimal adalah %d\n",a);
	printf("Character kode ASCII 'B' dalam desimal adalah %d\n",b);
	
	printf("Hasil perkalian kode ASCII tersebut adalah: \n");
	printf("%d*%d = %d",a,b,a*b);
	return 0;
}

