#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	printf("nhap vao chuoi muon nhap: ");
	fgets(chuoi,100,stdin);
	fputs(chuoi,stdout);
	for(int i=strlen(chuoi);i>=0;i--){
		printf(" %c ",chuoi[i]);
	}
	return 0;
}
