#include <stdio.h>


void nhapMang(int a[], int n);
void xuatMang(int a[], int n);

int main()
{
    int n = 5;
    int mangA[n];
    nhapMang(mangA, n);
    xuatMang(mangA, n);
    
    return 0;
}

void nhapMang(int a[], int n) {
    
    for(int i = 0; i < n; i++) {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("A[%d] = %d\n", i, a[i]);
    }
}