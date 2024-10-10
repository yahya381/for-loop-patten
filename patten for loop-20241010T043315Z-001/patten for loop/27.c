#include<stdio.h>
int main(){
	int rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	
	int i,j,k;
	char ch='A';
	for(i=1;i<=8;i++){
		for(k=8;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%c ",j);
		}
		ch++;
		printf("\n");
	}
}
