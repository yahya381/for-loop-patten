/*
              E 
            D E 
          C D E 
        B C D E 
      A B C D E 
        B C D E 
          C D E 
            D E 
              E
              */
#include<stdio.h>
int main(){
	int i,j,k;

	int ch=64;
	for(i=5;i>=1;i--){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%c ",ch+j);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++){
		for(k=i;k>=1;k--){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}
