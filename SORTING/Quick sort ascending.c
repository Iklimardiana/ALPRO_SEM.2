#include <stdio.h>
#include <stdlib.h>

/* Deklarasi Global */
int tabInt[10]={34,67,23,28,98,15,89,67,28,18};
    
/* Prosedur Pivot Pinggir */
void quickSortPivotPinggir(int l, int r)
{
    int i,j,temp;
    i=l;
    j=r;
    
    do
    {
        while((tabInt[i]<tabInt[r]) && (i<=j))
        {
            i=i+1;
        }
        
        while((tabInt[j]>tabInt[l]) && (i<=j))
        {
            j=j-1;
        }
        
        if(i<j)
        {
            temp=tabInt[i];
            tabInt[i]=tabInt[j];
            tabInt[j]=temp;
            i=i+1;
            j=j-1;
        }
        
    }while(i<j);
    
    if(l<j)
    {
        quickSortPivotPinggir(l,j);
    }
    
    if(i<r)
    {
        quickSortPivotPinggir(i,r);
    }
    
}
    
/* Pivot Tengah */
void quickSortPivotTengah(int l, int r)
{
    int i,j,temp,pivot;
    i=l;
    j=r;
    
    pivot=tabInt[(l+r)/2];
    
    do
    {
        while((tabInt[i]<pivot) && (i<=j))
        {
            i=i+1;
        }
        
        while((tabInt[j]>pivot) && (i<=j))
        {
            j=j-1;
        }
        
        if(i<j)
        {
           temp=tabInt[i];
           tabInt[i]=tabInt[j];
           tabInt[j]=temp;
           i=i+1;
           j=j-1;
        }
        
    }while(i<j);
    
    if((l<j) && (j<r) && (i!=j))
    {
        quickSortPivotTengah(l,j);
    }
    
    if((i<r) && (i>l))
    {
        quickSortPivotTengah(i,r);
    }
    
}

void cetakArray(int n, int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d", arr[i]);
    }
}
    
int main()
{
    
    quickSortPivotPinggir(0,9);
    //quickSortPivotTengah(0,9);
    cetakArray(10, tabInt);
    return 0;
}
