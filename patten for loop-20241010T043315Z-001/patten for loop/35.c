#include<stdio.h>
int main(){
	int i,j,k;
	int a=5;
	for(i=1;i<=a;i++){
		for(k=1;k<=a+2-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}
