#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	char i,j;
	int a=65,s=74;
	
	for(i=s;i>=a;i--){
		for(j=a;j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
	}
