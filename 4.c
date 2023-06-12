#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void randomize(int a[], int size);
int checkArray(int a[], int size, int n);

int main(){
    int number;
    int size = 20;
    int a[size];
    
    printf("20 phan tu ngau nhien cua mang la:\n");
    randomize(a, size);

    printf("\nNhap so can kiem tra: ");
    scanf("%d", &number);
    if (checkArray(a, size, number))
    {
        printf("\n%d co thuoc mang da tao.", number);
    }else
    {
        printf("\n%d khong thuoc mang da tao.", number);
    }    
    return 0;
}

void randomize(int a[], int size){
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand();
        printf("%d; ", a[i]);
    }
}


int checkArray(int a[], int size, int n){
    for (int i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            return 1;
        }
       
    }
    return 0;
}

