#include<stdio.h>
int main(){
int rows;
printf("enter the number of rows");
scanf("%d",&rows);

int i,j,k;
int n=10;
for(i=1;i<=n;i++){
	for(k=1;k<=n-i;k++){
		printf(" ");
	}
	for(j=1;j<=i;j++){
		printf("%d",i);
	}
	printf("\n");
}
}
