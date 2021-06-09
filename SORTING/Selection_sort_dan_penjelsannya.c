#include <stdio.h>
int main()
{
    int n=10;
    int A [10]={10,9,8,7,6,5,4,3,2,1};
    int i,j,temp,min,jmlTukar,k;
    jmlTukar=0;
    printf("Sebelum diurutkan:\n");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\nProses Pengurutan:");
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(A[i]>A[j]){
                min=j;
            }
        }
        jmlTukar++;
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
        printf("\n");
        printf("Iterasi Ke-%d Penukaran Ke-%d\n",i,jmlTukar);
        for(k=0;k<n;k++){
            printf("%d ",A[k]);
        } 
    }
    printf("\nJumlah Penukaran Data terjadi %d Kali\nSetelah diurutkan:\n",jmlTukar);
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
