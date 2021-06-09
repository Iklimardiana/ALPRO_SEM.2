/*
	Author 		: Iklima Mardiana
	Email 		: 11iklimardiana9@upi.edu
	Deskripsi 	: program penjumlahan kode ASCII
*/

#include <stdio.h>
int main()
{
	char x,y;
	x = '1';
	y = '2';
	printf("Character kode ASCII ke-1 = %c\n",x);
	printf("Character kode ASCII ke-2 = %c\n",y);
	printf("Konversi kode ASCII '1' ke desimal = %d\n",x);
	printf("Konversi kode ASCII '2' ke desimal = %d\n",y);
	
	printf("Operasi penjumlahan kode ASCII '1' & '2' setelah dikonversi menjadi desimal: \n");
	printf("%d+%d=%d\n",x,y,(x+y));

	return 0;
}
	
