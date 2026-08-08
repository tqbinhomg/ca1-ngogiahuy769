#include <stdio.h>


void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int linearSearch(int a[], int n, int x); //tra ra vi tri tim thay gia tri x, neu ko tim thay tra ra -1

int main()
{
    int n = 5;
    int x = 4;
    int viTri;
    int mangA[n];
    nhapMang(mangA, n);
    viTri = linearSearch(mangA,n,x);
    if((viTri = linearSearch(mangA,n,x))==-1){
        printf("Khong tim thay cai tra tri x %d trong mang\n",x);
    }else{
        printf("Da tim thay %d trong mang tai vi tri %d\n",x,viTri);
    }
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

int linearSearch(int a[], int n, int x){
    for(int i=0; i < n; i++){
        if(a[i]==x){
            return i;
        }
        return -1;
    }
}
