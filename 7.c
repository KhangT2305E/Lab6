#include<stdio.h>

int main() {
    char s[11];
    int i;
    for (i = 0; i < 10; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n')
        {
            break;
        }
    }
    s[i] = '\0';
    printf("Chuoi da nhap: %s\n", s);
    printf("Danh sach cac ky tu va ma ASCII tuong ung:\n");
    for (int j = 0; j < i; j++) {
        printf("%c: %d\n", s[j], s[j]);
    }
    return 0;
}