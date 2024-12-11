#include<stdio.h>
#include<string.h>
int main (){
	char chuoi[100];
	int dem=0;
	printf("nhap chuoi bat ki: ");
	fgets(chuoi,100,stdin);
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]==' '){
			dem++;
		}
	}
	printf("so luong chu cai trong chuoi la: %d",dem+1);
	return 0;
}
