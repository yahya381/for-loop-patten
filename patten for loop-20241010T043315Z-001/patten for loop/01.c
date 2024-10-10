#include<stdio.h>
int main(){
	int number;
	printf("enter the number of rows");
	scanf("%d",&number);
	printf("enter the number of column");
	scanf("%d",&number);
	
	int i,j,n=9;
	
	for(i=1;i<=n+1;i++){
		for(j=1;j<=n+1;j++){
		printf("*");
		}
	printf("\n");
	}
}
