#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	char i,j;
    int a=74,b=65;
	for(i=a;i>=b;i--){
		for(j=a;j>=b;j--){
			printf("%c",j);
		}
	printf("\n");	
	}
	} 
