#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	char n; 
	int dem=0;
	printf("nhap vao chuoi muon nhap: ");
	fgets(chuoi,100,stdin);
	fputs(chuoi,stdout);
	printf("nhap vao ki tu muon kiem tra: ");
	scanf("%c",&n);
	for(int i=strlen(chuoi);i>=0;i--){
		if(n==chuoi[i]){
			dem++;
		}
	}
	printf("so lan xuat hien cua phan tu %c la %d",n,dem);
	return 0;
}
