/*
	Author	: Iklima Mardiana
	Email	: 11iklimardiana9@upi.edu
	NIM	: 2008765
	Kelas	: KOM2A
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int NIM;
    char nama[30], Indeks[5], kelas[10];
    char JenisKelamin;
    int UTS, UAS, Tugas;
    float mutu, akhir;
} Data;

Data mahasiswa[1];
int urutan = 0;

void TampilData()
{
    int a = 0;
    printf("\n\n*****************************************************************\n");
    printf("****************** Program Nilai Akhir Siswa ********************\n");
    printf("******** ||Iklima Mardiana||2008765||11iklimardiana9@upi.edu| ******\n");
    for (a; a < urutan; a++)
    {
        printf("\n");
        printf("*******************************************************************\n");
        printf("**********************||Data Mahasiswa Ke-%d||**********************\n", a + 1);
        printf("*******************************************************************\n\n");
        printf("NIM           : %i \n", mahasiswa[a].NIM);
        printf("Nama          : %s \n", mahasiswa[a].nama);
        printf("Kelas         : %s \n", mahasiswa[a].kelas);
        printf("Jenis Kelamin : %c \n", mahasiswa[a].JenisKelamin);
        printf("Nilai Tugas   : %d \n", mahasiswa[a].Tugas);
        printf("Nilai UTS     : %d \n", mahasiswa[a].UTS);
        printf("Nilai UAS     : %d \n", mahasiswa[a].UAS);
        printf("Nilai Akhir   : %.1f \n", mahasiswa[a].akhir);
        printf("Indeks Huruf  : %s \n", mahasiswa[a].Indeks);
        printf("Mutu          : %.1f \n", mahasiswa[a].mutu);
        printf("\n\n");
    }

    printf("\n");
}

void Terkecil()
{
    int a = 0;
    float Terkecil;
    Terkecil = mahasiswa[a].akhir;
    for (a; a < urutan; a++)
    {
        if (mahasiswa[a].akhir <= Terkecil)
        {
            Terkecil = mahasiswa[a].akhir;
        }
    }
    printf("*******************************************************************\n");
    printf("************* ||Nilai Terkecil dari semua mahasiswa|| *************\n");
    printf("*******************************************************************\n");
    printf("Nilai Terkecil: %.2f\n\n", Terkecil);
}

void Terbesar()
{
    int a = 0;
    float Terbesar;
    Terbesar = mahasiswa[a].akhir;
    for (a; a < urutan; a++)
    {
        if (mahasiswa[a].akhir >= Terbesar)
        {
            Terbesar = mahasiswa[a].akhir;
        }
    }
    printf("*******************************************************************\n");
    printf("************* ||Nilai Terbesar dari semua mahasiswa|| *************\n");
    printf("*******************************************************************\n");
    printf("Nilai Terbesar: %.1f\n\n", Terbesar);
}

void RataRata()
{
    float RataRata;
    int a = 0;
    RataRata = 0;
    for (a; a <= urutan; a++)
    {
        RataRata = RataRata + mahasiswa[a].akhir;
    }
    RataRata = RataRata / urutan;
    printf("*******************************************************************\n");
    printf("****************** ||Nilai Rata-Rata Mahasiswa|| ******************\n");
    printf("*******************************************************************\n");
    printf("Nilai Rata-Rata: %.2f\n\n", RataRata);
}

void Datamasuk()
{
    char Tanya;
    int Menu, l, r;

    do
    {
        printf("*****************************************************************\n");
        printf("*************** ||Masukkan Data mahasiswa ke-%d|| ****************\n", urutan + 1);
        printf("*****************************************************************\n");
        printf("Masukkan NIM: ");
        scanf(" %d", &mahasiswa[urutan].NIM);
        printf("Masukkan nama mahasiswa: ");
        scanf(" %[^\n]s", &mahasiswa[urutan].nama);
        printf("Masukkan kelas: ");
        scanf(" %[^\n]s", &mahasiswa[urutan].kelas);
        printf("Masukkan jenis Kelamin (L/P): ");
        scanf(" %c", &mahasiswa[urutan].JenisKelamin);
        printf("Masukkan nilai UTS: ");
        scanf(" %d", &mahasiswa[urutan].UTS);
        printf("Masukkan nilai UAS: ");
        scanf(" %d", &mahasiswa[urutan].UAS);
        printf("Masukkan nilai Tugas: ");
        scanf(" %d", &mahasiswa[urutan].Tugas);
    MENU:
        printf("Ingin menambah data lagi? Tekan (Y/N) dan enter ");
        scanf(" %c", &Tanya);

        float NA = ((float)mahasiswa[urutan].Tugas * 30 / 100) + ((float)mahasiswa[urutan].UTS * 30 / 100) + ((float)mahasiswa[urutan].UAS * 40 / 100);
        mahasiswa[urutan].akhir = NA;
        if (NA >= 92 && NA <= 100)
        {
            mahasiswa[urutan].mutu = 4.0;
            strcpy(mahasiswa[urutan].Indeks, "A");
        }
        else if (NA >= 86 && NA <= 91.9)
        {
            mahasiswa[urutan].mutu = 3.7;
            strcpy(mahasiswa[urutan].Indeks, "A-");
        }
        else if (NA >= 81 && NA <= 85.9)
        {
            mahasiswa[urutan].mutu = 3.4;
            strcpy(mahasiswa[urutan].Indeks, "B+");
        }
        else if (NA >= 76 && NA <= 80.9)
        {
            mahasiswa[urutan].mutu = 3.0;
            strcpy(mahasiswa[urutan].Indeks, "B");
        }
        else if (NA >= 71 && NA <= 75.9)
        {
            mahasiswa[urutan].mutu = 2.7;
            strcpy(mahasiswa[urutan].Indeks, "B-");
        }
        else if (NA >= 66 && NA <= 70.9)
        {
            mahasiswa[urutan].mutu = 2.4;
            strcpy(mahasiswa[urutan].Indeks, "C+");
        }
        else if (NA >= 60 && NA <= 65.9)
        {
            mahasiswa[urutan].mutu = 2.0;
            strcpy(mahasiswa[urutan].Indeks, "C");
        }
        else if (NA >= 55 && NA <= 59.9)
        {
            mahasiswa[urutan].mutu = 1.0;
            strcpy(mahasiswa[urutan].Indeks, "D");
        }
        else if (NA >= 0 && NA <= 54.9)
        {
            int NilaiAkhir = NA / 55 * 10;
            mahasiswa[urutan].mutu = (float)NilaiAkhir / 10;
            strcpy(mahasiswa[urutan].Indeks, "E");
        }
        urutan++;
    } while (Tanya == 'Y' || Tanya == 'y');
    if (Tanya == 'N' || Tanya == 'n')
    {
        TampilData();
        RataRata();
        Terkecil();
        Terbesar();
    }
}

int main()
{
    int menu;
    printf("****************************************************************\n");
    printf("****************** Program Nilai Akhir Siswa *******************\n");
    printf("****** (Iklima Mardiana, 2008765, 11iklimardiana9@upi.edu) *****\n");
    printf("************************* Copyright @ 2021 *********************\n");
    printf("\n");
MENU:
    printf("Silakan pilih nomor menu lalu tekan enter :\n");
    printf("[1] Memasukkan dan menampilkan data mahasiswa\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        Datamasuk();
        break;
    default:
        printf("Menu Tidak Tersedia\n\n");
        goto MENU;
    }
    return 0;
}
