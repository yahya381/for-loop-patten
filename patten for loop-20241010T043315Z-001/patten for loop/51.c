/*
E E E E E E E E E 
  D D D D D D D 
    C C C C C 
      B B B 
        A
        */
#include<stdio.h>
int main(){
	int i,j,k;
	int ch=64;
	for(i=5;i>=1;i--){
		for(k=1;k<=5-i;k++){
		printf("  ");
	}
	for(k=1;k<=5-i;k++){
		printf("  ");
	}
		for(j=1;j<=2*i-1;j++){
			printf("%c ",ch+i);
		}
		printf("\n");
	}
}
