#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	char i,j;
	int a=65,b=74;
	for(i=a;i<=b;i++){
		for(j=a;j<=i;j++){
			printf("%c",i);
		}
		printf("\n");
	}
}
