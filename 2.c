#include<stdio.h>
 void copyArray(int a[5], int n, float b[10]);
 int main(){
    int n = 5;
    int a[5];
    float b[10] = {0};
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {   
        printf("Nhap phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &a[i]);
    }
    copyArray(a, n, b);
    printf("Mang da sao chep la: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f; ", b[i]);
    }
    return 0;
 }
 void copyArray(int a[5], int n, float b[10]){
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
 }