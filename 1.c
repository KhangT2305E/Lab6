#include<stdio.h>
int main(){
    int n = 10;
    int a[10];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {   
        printf("Phan tu thu %d cua mang la: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}