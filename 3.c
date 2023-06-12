#include<stdio.h>

int appearTime(int a[10], int n, int target);
int max(int a[10], int n);
void maxTime (int a[10], int n);
int min(int a[10], int n);
void minTime (int a[10], int n);
int mathTotal(int a[10], int n);
int mathAverage(int a[10], int n);

//Thực hiện
int main(){
    int n = 10;
    int a[10];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {   
        printf("Nhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &a[i]);
    }
    maxTime(a, n);
    minTime(a, n);
    mathTotal(a, n);
    mathAverage(a, n);
    return 0;
}

//Đếm số lần xuất hiện của phần tử
int appearTime(int a[10], int n, int target){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
           count++;
        }
    }return count;
    
}
//Tìm Max và số lần xuất hiện của Max
int max(int a[10], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }return max;
}
void maxTime (int a[10], int n){
    int maxValue = max(a, n);
    int count = appearTime(a, n, maxValue);
    printf("\nGia tri lon nhat cua mang la %d va xuat hien %d lan.", maxValue, count);
}
//Tìm Min và số lần xuất hiện của Min
int min(int a[10], int n){
    int min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }return min;
}
void minTime (int a[10], int n){
    int minValue = min(a, n);
    int count = appearTime(a, n, minValue);
    printf("\nGia tri lon nhat cua mang la %d va xuat hien %d lan.", minValue, count);
}
//Tổng và trung bình cộng các phần tử vừa tìm
int mathTotal(int a[10], int n){
    int total = 0;
    int c = max(a, n);
    int b = min(a, n);
    total = c + b;
    printf("\nTong cac phan tu vua tim la: %d.", total);
    return 0;
}

int mathAverage(int a[10], int n){
    int avg = 0;
    int c = max(a, n);
    int b = min(a, n);
    avg = (c + b) / 2;
    printf("\nTrung binh cong cac phan tu vua tim la: %d.", avg);
    return 0;
}
