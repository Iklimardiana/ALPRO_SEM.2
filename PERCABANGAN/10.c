/*Menentukan nilai indeks akhir mahasiswa A,B,C,D atau E berdasarkan Nilai Akhir (NA) dari
perihitungan komponen nilai UTS,UAS dan Tugas, dengan bobot nilai berturut-turut adalah
35%,45% dan 20%. Dengan ketentuan sebagai berikut:
A Jika 80<=NA<=100
B Jika 70<=NA<80
C Jika 50<=NA<70
D Jika 40<=NA<50
E Jika NA<40
*/

#include <stdio.h>

int main (){
	float UTS, UAS, Tugas, NA;
	printf ("Masukkan nilai UTS: ");
	scanf ("%f", &UTS);
	printf ("Masukkan nilai UAS: ");
	scanf ("%f", &UAS);
	printf ("Masukkan nilai Tugas: ");
	scanf ("%f", &Tugas);
	NA = ((UTS*35/100)+(UAS*45/100)+(Tugas*20/100));
	if (NA>=80 && NA<=100){
		printf ("Graded : A");
	}else if (NA>=70 && NA<80){
		printf ("Graded :B");
	}else if (NA>=50 && NA<70){
		printf ("Graded :C");
	}else if (NA>=40 && NA<50){
		printf ("Graded :D");
	}else if (NA<40){
		printf ("Graded :E");
	}
	
	return 0;
}
