#include<stdio.h>
int main(){
	int i,j,k;
	int ch=65;
	for(i=1;i<=5;i++){
		for(k=5;k>=i;k--){
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%c ",ch);
		}
		printf("\n");
		ch=ch+1;
	}
}
