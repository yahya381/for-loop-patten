#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
