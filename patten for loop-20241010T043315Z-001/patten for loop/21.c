#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	
	char i,j;
	int a=65,b=74;
	for(i=b;i>=a;i--){
		for(j=i;j>=a;j--){
			printf("%c",i);
		}
		printf("\n");
	}
}
