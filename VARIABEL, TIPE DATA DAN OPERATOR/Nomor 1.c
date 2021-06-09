/* File: integer.c 
	Author	: Iklima Mardiana
	Email	: 11iklimardiana9@upi.edu
	Deskripsi : Program operasi integer
 */
	
#include <stdio.h>
int main ()
{
	int x,y,z;
	printf ("Masukkan nilai x : ");
	scanf("%d", &x);
	printf ("Masukkan nilai y : ");
	scanf("%d", &y);
	printf ("Masukkan nilai z : ");
	scanf("%d", &z);
	
	printf ("%d+%d+%d=%d\n",x,y,z,x+y+z);
	printf ("%d-%d-%d=%d\n",x,y,z,x-y-z);
	printf ("%d*%d*%d=%d\n",x,y,z,x*y*z);
	printf ("%d/%d/%d=%d\n",x,y,z,x/y/z);
	
	return 0;
}
	
