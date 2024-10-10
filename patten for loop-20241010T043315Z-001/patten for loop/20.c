#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	
	
int i,j;
	
	for(i=1;i<=10;i++){
		for(j=10;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	}
