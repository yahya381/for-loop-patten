/*
        A 
      B A B 
    C B A B C 
  D C B A B C D 
E D C B A B C D E
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int ch=64;
	for(i=1;i<=5;i++){
		for(k=4;k>=i;k--){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%c ",ch+j);
		}
		for(j=2;j<=i;j++){
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}
