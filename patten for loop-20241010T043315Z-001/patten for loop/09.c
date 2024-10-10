#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	int i,j;
	for(i=10;i>=1;i--){
		for(j=i;j<=10;j++){
			printf("*",j);
		}
		printf("\n");
	}
}
