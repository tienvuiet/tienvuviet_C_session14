#include<stdio.h>
#include<string.h>
char vietHoa(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}
int main() {
    char chuoi[100];
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, 100, stdin);
    int vietHoaTiep = 1; 
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ') {
            vietHoaTiep = 1;
        } else if (vietHoaTiep && ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z'))) {
            chuoi[i] = vietHoa(chuoi[i]); 
            vietHoaTiep = 0; 
        }
    }
    printf("Chuoi sau khi viet hoa: %s\n", chuoi);
    char kitu;
    printf("nhap vao ki tu muon xoa: ");
    scanf("%c",&kitu);
    int i = 0, j = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] != kitu) {
            chuoi[j++] = chuoi[i];
        }
        i++;
    }
    chuoi[j] = '\0';
        printf("Xoa phan tu thanh cong!\n");
        printf("mang sau khi xoa la:");
		   for(int i=0;i<strlen(chuoi);i++){
         	printf("%c ",chuoi[i]);
					}
    return 0;
}
