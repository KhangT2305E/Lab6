#include<stdio.h>


int main(){
    int r = 5;
    int c = 6;
    float a[r][c];
    int i, j;

    //Nhập điểm cho ma trận
    printf("Nhap diem:\n");
    for ( i = 0; i < r; i++)
    {
        printf("Nhap diem cho hoc vien %d:\n", i + 1);
        for ( j = 0; j < c; j++)
        {
            printf("Mon hoc %d: ", j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    //Hiển thị ma trận điểm
    printf("\nHoc vien |");
    for (j = 0; j < c; j++)
    {
        printf(" Mon hoc %d |", j + 1);
    }
    printf("\n");

    for ( i = 0; i < r; i++)
    {
        printf("HV %-6d|", i + 1);
        for ( j = 0; j < c; j++)
        {
            printf(" %-9.2f |", a[i][j]);
        }
        printf("\n");
    }
    
    //Tính và hiển thị điểm trung bình
    printf("\n Diem trung binh:\n");
    for ( i = 0; i < r; i++)
    {
        float sum = 0.0;
        for ( j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        float avg = sum / c;
        printf("Hoc vien %d: %.2f\n", i + 1, avg);
    }
    return 0;
}