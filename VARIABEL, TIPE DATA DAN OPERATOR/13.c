/* 	
	Author 		: Iklima Mardiana
	Email  		: 11iklimardiana9@upi.edu
	Deskripsi 	: Pak Yaya membeli buah mangga dari petani sebesar Rp10.000 per kg. Kemudian mangga
				  tersebut dijual lagi dengan harga Rp15.000. Berapa persen laba atau untung yang diperoleh
				  Pak Yaya
*/
#include <stdio.h>
#include <string.h>

int main(){
	float x,y,z, Laba;
	x = 10000;
	y = 15000;
	z = y-x;
	Laba = (z/x)*100;
	printf ("Persen laba dari penjualan tersebut adalah %.0f%%", Laba);


	return 0;
}
