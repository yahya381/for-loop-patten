/*
        A 
      A B A 
    A B C A B 
  A B C D A B C 
A B C D E A B C D
*/
#include<stdio.h>
int main(){
	int i,j,k;
	int ch=64;
	for(i=1;i<=5;i++){
		for(k=i;k<=5;k++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("%c ",ch+j);
		}
		for(j=1;j<=i-1;j++){
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}
