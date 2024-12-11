#include<stdio.h>
#include<string.h>
int main() {
    char chuoi[100];
    int dem = 0;
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, 100, stdin);
    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) { 
            dem++;
        }
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", dem);
    return 0;
}
