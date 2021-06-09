/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int NIM;
    char nama[30];
    char kelas[10];
    char JenisKelamin;
    int UTS, UAS, Tugas;
	float mutu, akhir;
    char Indeks [5];
} Data;
Data mahasiswa [1];
int urutan=0;

void insertion(){
	int a=1;
	Data insert;
	int DataSesudah,j; //j = indeks sebelum a
	for(a; a<urutan; a++){
		insert = mahasiswa[a];
		DataSesudah = mahasiswa[a].akhir;
		j = a-1;
		while((DataSesudah>mahasiswa[j].akhir) && (j>=0)){
			mahasiswa[j+1]=mahasiswa[j];
			j = j-1;
		}
		mahasiswa[j+1]=insert;
	}
}

void selection(){
	int a=0;
	Data tampung;
	int minIndeks,j;
	for(a; a<(urutan-1); a++){
		minIndeks = a;
		for(j=(a+1); j<urutan; j++){
			if (mahasiswa[j].akhir>mahasiswa[minIndeks].akhir){
				minIndeks = j;
			}
		}
		tampung = mahasiswa[a];
		mahasiswa[a] = mahasiswa[minIndeks];
		mahasiswa[minIndeks] = tampung;
	}
}

void Bubble(){
	int a,tukar;
	Data tampung;

    do
    {
        tukar=0;
        for(a=0;a<(urutan-1);a++)
        {
            if(mahasiswa[a].akhir<mahasiswa[a+1].akhir)
            {
                tampung = mahasiswa[a];
                mahasiswa[a]=mahasiswa[a+1];
                mahasiswa[a+1]=tampung;
                tukar=1;
            }
        }
        
    }while(tukar==1);
}

void Quick(int l, int r){
 	int i,j;
    Data temp;
    i=l;
    j=r;
	
        do
        {
            while((mahasiswa[i].akhir<mahasiswa[r].akhir) && (i<=j))
            {
                i=i+1;
            }
            
            while((mahasiswa[j].akhir>mahasiswa[l].akhir) && (i<=j))
            {
                j=j-1;
            }
            
            if(i<j)
            {
                temp=mahasiswa[i];
                mahasiswa[i]=mahasiswa[j];
                mahasiswa[j]=temp;
                i=i+1;
                j=j-1;
            }
            
        }while(i<j);
        
        if(l<j)
        {
            Quick(l,j);
        }

		if(i<r)		//ditambahin
		{
			Quick(i,r);
		}

    }
void tampil_pencarian(int a){
		printf("\n\n*******************************************************************\n");
		printf("************************||Hasil Pencarian||************************\n");
		printf("*******************************************************************\n\n");	
		printf("NIM           : %d \n",mahasiswa[a].NIM);
		printf("Nama          : %s \n",mahasiswa[a].nama);
		printf("Kelas         : %s \n",mahasiswa[a].kelas);
		printf("Jenis Kelamin : %c \n",mahasiswa[a].JenisKelamin);
		printf("Nilai Tugas   : %d \n",mahasiswa[a].Tugas);
		printf("Nilai UTS     : %d \n",mahasiswa[a].UTS);
		printf("Nilai UAS     : %d \n",mahasiswa[a].UAS);
		printf("Nilai Akhir   : %.1f \n",mahasiswa[a].akhir);
		printf("Indeks Huruf  : %s \n",mahasiswa[a].Indeks);
		printf("Mutu          : %.1f \n",mahasiswa[a].mutu);
		printf("\n\n");	
}

void TampilData(){
	int a=0;	
	printf ("\n\n*****************************************************************\n");
    printf ("****************** Program Nilai Akhir Siswa ********************\n");
	printf ("******** ||Iklima Mardiana||2008765||11iklimardiana9@upi.edu| ******\n");
	for(a; a<urutan; a++){		
		printf ("\n");
		printf("*******************************************************************\n");
		printf("**********************||Data Mahasiswa Ke-%d||**********************\n",a+1);
		printf("*******************************************************************\n\n");
		printf("NIM           : %d \n",mahasiswa[a].NIM);
		printf("Nama          : %s \n",mahasiswa[a].nama);
		printf("Kelas         : %s \n",mahasiswa[a].kelas);
		printf("Jenis Kelamin : %c \n",mahasiswa[a].JenisKelamin);
		printf("Nilai Tugas   : %d \n",mahasiswa[a].Tugas);
		printf("Nilai UTS     : %d \n",mahasiswa[a].UTS);
		printf("Nilai UAS     : %d \n",mahasiswa[a].UAS);
		printf("Nilai Akhir   : %.1f \n",mahasiswa[a].akhir);
		printf("Indeks Huruf  : %s \n",mahasiswa[a].Indeks);
		printf("Mutu          : %.1f \n",mahasiswa[a].mutu);
		printf("\n\n");
	}
	
	printf("\n"); 
}


void Terkecil(){
	int a=0;
	float Terkecil;
	Terkecil = mahasiswa[a].akhir;
	for (a; a<urutan; a++){
		if (mahasiswa[a].akhir<=Terkecil){
			Terkecil = mahasiswa[a].akhir;
		}
	}
	printf ("*******************************************************************\n");
	printf ("************* ||Nilai Terkecil dari semua mahasiswa|| *************\n");
	printf ("*******************************************************************\n");
	printf ("Nilai Terkecil: %.1f\n\n", Terkecil);
}

void Terbesar(){
	int a=0;
	float Terbesar;
	Terbesar = mahasiswa[a].akhir;
	for (a; a<urutan; a++){
		if (mahasiswa[a].akhir>=Terbesar){
			Terbesar = mahasiswa[a].akhir;
		}
	}
	printf ("*******************************************************************\n");
	printf ("************* ||Nilai Terbesar dari semua mahasiswa|| *************\n");
	printf ("*******************************************************************\n");
	printf ("Nilai Terbesar: %.1f\n\n", Terbesar);
}

void RataRata(){
	float RataRata;
	int a=0;
	RataRata =0;
	for (a; a<=urutan; a++){
		RataRata= RataRata+mahasiswa[a].akhir;
	}
	RataRata = RataRata/urutan;
	printf ("*******************************************************************\n");
	printf ("****************** ||Nilai Rata-Rata Mahasiswa|| ******************\n");
	printf ("*******************************************************************\n");
	printf ("Nilai Rata-Rata: %.1f\n\n", RataRata);
}

void Bubblesearch(){
	int a,tukar;
	Data tampung;

    do
    {
        tukar=0;
        for(a=0;a<(urutan-1);a++)
        {
            if(mahasiswa[a].NIM>mahasiswa[a+1].NIM)
            {
                tampung = mahasiswa[a];
                mahasiswa[a]=mahasiswa[a+1];
                mahasiswa[a+1]=tampung;
                tukar=1;
            }
        }
        
    }while(tukar==1);
}

void binarysearch(int awal, int akhir){
		int search_NIM;
		printf ("Masukkan NIM yang akan dicari: ");
		scanf ("%d", &search_NIM);
		int i=awal;
		int j= akhir;
		int ketemu = 0;
		int k;
		while ((ketemu==0)&&(i<=j)){
			k= (i+j)/2;
			if (mahasiswa[k].NIM == search_NIM){
				ketemu =1;
			}
			else{
				if (mahasiswa[k].NIM>search_NIM){
					j = k-1;
				}else{
					i = k +1;
				}
			}
		}
		if(ketemu == 1){
			tampil_pencarian(i);
		}
		else{
			printf ("Data Mahasiswa tidak ditemukan!\n");
		}
	}

void SequentialSearch()
	{
    int nim_cari;
    int i, ketemu;
    Data Mahasiswa;
    Mahasiswa= mahasiswa[i];
    
    printf ("Masukkan NIM yang akan dicari: ");
	scanf ("%d", &nim_cari);
    ketemu=0;
    i=0;
    
    while((i<urutan) && (ketemu==0))
    {
        if(mahasiswa[i].NIM== nim_cari)
        {
            ketemu=1;
        }
        else
        {
            i=i+1;
        }
    }
    
    if(ketemu==1)
    {
 		tampil_pencarian(i);
    }
    else
    {
        printf("Data mahasiswa yang dicari tidak ditemukan\n");
    }
}

void Datamasuk(){
	char Tanya, pilihan;	
	int Menu, l, r, m;

	do{
		printf ("*****************************************************************\n");
		printf ("*************** ||Masukkan Data mahasiswa ke-%d|| ****************\n", urutan+1);
		printf ("*****************************************************************\n");
		printf ("Masukkan NIM: "); scanf (" %d", &mahasiswa[urutan].NIM);
		printf ("Masukkan nama mahasiswa: "); scanf (" %[^\n]s", &mahasiswa[urutan].nama);
		printf ("Masukkan kelas: "); scanf (" %[^\n]s", &mahasiswa[urutan].kelas);
		printf ("Masukkan jenis Kelamin (L/P): "); scanf (" %c", &mahasiswa[urutan].JenisKelamin);
		printf ("Masukkan nilai UTS: "); scanf (" %d", &mahasiswa[urutan].UTS);
		printf ("Masukkan nilai UAS: "); scanf (" %d", &mahasiswa[urutan].UAS);
		printf ("Masukkan nilai Tugas: "); scanf (" %d", &mahasiswa[urutan].Tugas);
		printf ("\n*****************************************************************\n");
		MENU:
		printf ("Ingin menambah data lagi? Tekan (Y/N) dan enter ");
		scanf (" %c", &Tanya);
		printf ("\n*****************************************************************\n\n");		

		float NA = ((float)mahasiswa[urutan].Tugas * 30/100) + ((float)mahasiswa[urutan].UTS * 30/100) + ((float)mahasiswa[urutan].UAS * 40/100);
		mahasiswa[urutan].akhir = NA;
		if(NA>=92 && NA<=100){
			mahasiswa[urutan].mutu = 4.0;
			strcpy(mahasiswa[urutan].Indeks,"A");
		}
		else if(NA>=86 && NA<=91.9){
			mahasiswa[urutan].mutu = 3.7;
			strcpy(mahasiswa[urutan].Indeks,"A-");
		}
		else if(NA>=81 && NA<=85.9){
			mahasiswa[urutan].mutu = 3.4;
			strcpy(mahasiswa[urutan].Indeks,"B+");
		}
		else if(NA>=76 && NA<=80.9){
			mahasiswa[urutan].mutu = 3.0;
			strcpy(mahasiswa[urutan].Indeks,"B");
		}
		else if(NA>=71 && NA<=75.9){
			mahasiswa[urutan].mutu = 2.7;
			strcpy(mahasiswa[urutan].Indeks,"B-");
		}
		else if(NA>=66 && NA<=70.9){
			mahasiswa[urutan].mutu = 2.4;
			strcpy(mahasiswa[urutan].Indeks,"C+");
		}
		else if(NA>=60 && NA<=65.9){
			mahasiswa[urutan].mutu = 2.0;
			strcpy(mahasiswa[urutan].Indeks,"C");
		}
		else if(NA>=55 && NA<=59.9){
			mahasiswa[urutan].mutu = 1.0;
			strcpy(mahasiswa[urutan].Indeks,"D");
		}
		else if(NA>=0 && NA<=54.9){
			int NilaiAkhir = NA/55*10;  
			mahasiswa[urutan].mutu = (float)NilaiAkhir/10;
			strcpy(mahasiswa[urutan].Indeks,"E");
		}
		urutan++;
	}while (Tanya=='Y' || Tanya=='y');
	if (Tanya=='N' || Tanya=='n')
	{
		printf ("Pilih menu berikut!\n");
		printf ("[A] Sorting\n");
		printf ("[B] Searching\n");
		scanf ("%s", &pilihan);
		
		if (pilihan == 'A' || pilihan == 'a')
		{
			printf ("[1] Tampilkan data Insertion Sort\n");
			printf ("[2] Tampilkan data Selection sort\n");
			printf ("[3] Tampilkan data Bubble sort\n");
			printf ("[4] Tampilkan data quick sort\n");	//beda
			printf ("Silakan Pilih Nomor Menu: ");
			scanf ("%d", &Menu);
			if (Menu==1){
				insertion();
				TampilData();
				RataRata();
				Terkecil();
				Terbesar();
			}
			else if(Menu==2){
				selection();
				TampilData();
				RataRata();
				Terkecil();
				Terbesar();
			}
			else if(Menu==3){
				Bubble();
				TampilData();
				RataRata();
				Terkecil();
				Terbesar();			
			}
			else if(Menu==4){
				Quick(0,urutan-1);	//beda
				TampilData();
				RataRata();
				Terkecil();
				Terbesar();		
			}
		}
		if (pilihan == 'B' || pilihan == 'b'){
			printf ("Pilih metode searching yang akan digunakan!\n");
			printf ("[A] Binary Searchig\n");
			printf ("[B] Sequential Searching\n");
			scanf ("%s", &pilihan);
			
			if (pilihan=='A'||pilihan=='a'){
				Bubblesearch();
				binarysearch(0, urutan);
			}
			if (pilihan== 'B'||pilihan=='b'){
				SequentialSearch();
				
			}
		}
		
	}else{
		printf ("Menu Tidak Tersedia!\n");
		printf ("\n*****************************************************************\n");
		goto MENU;
	}
}

int main(){
	int menu;
	printf ("****************************************************************\n");
    printf ("****************** Program Nilai Akhir Siswa *******************\n");
	printf ("****** (Iklima Mardiana, 2008765, 11iklimardiana9@upi.edu) *****\n");
	printf ("************************* Copyright @ 2021 *********************\n");
	printf ("\n");
	MENU:
	printf ("Silakan pilih nomor menu lalu tekan enter :\n");
	printf ("[1] Memasukkan dan menampilkan data mahasiswa\n");
	scanf ("%d", &menu);

	switch (menu){
		case 1 : Datamasuk();break;
		default: printf ("Menu Tidak Tersedia\n\n");goto MENU;
	}
	return 0;
}

