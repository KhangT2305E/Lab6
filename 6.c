#include<stdio.h>

int main(){
    char choice;
    do
    {   
        
        char s[5][30];
        int n = 5;
        for (int i = 0; i < n ; i++)
        {   
            printf("\nMoi nhap ten sinh vien thu %d:\t", i + 1);
            scanf(" %[^\n]", s[i]);
            printf("\n");
        }
        
        printf("Danh sach ban vua nhap la:\n");   
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", s[i]);
        }
        printf("\nBan co muon tiep tuc khong(Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

