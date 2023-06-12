#include<stdio.h>

int checkPrimeNumber();
int maxValue(int a[], int n);
int minValue(int a[], int n);

int main(){
    
       int a[5];
       int n = 5;
       printf("Nhap vao 5 phan tu cua mang: ");
       for (int i = 0; i < n; i++)
       {
        printf("\nNhap vao phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &a[i]);

        if (!checkPrimeNumber(a[i]))
        {
            printf("\nDay khong phai la so nguyen to. Moi nhap lai!");
            i--;
        }
       }
    printf("\nMang gom cac phan tu vua nhap la:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d; ", a[i]);
    }

    int max = maxValue(a, n);
    printf("\n%d la gia tri lon nhat trong mang vua nhap.", max);
    int min = minValue(a, n);
    printf("\n%d la phan tu be nhat trong mang vua nhap.", min);

    return 0;
}

int checkPrimeNumber(int n){
    int i;
    if (n == 0 || n == 1){
        return 0;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}   

int maxValue(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
    {   
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int minValue(int a[], int n){
    int min = a[0];
    for (int i = 1; i < n; i++)
    {   
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}