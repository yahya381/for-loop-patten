#include<stdio.h>
/*
5 5 5 5 5   5 5 5 5 
 4 4 4 4   4 4 4 
  3 3 3   3 3 
   2 2   2 
    1
        */
main(){
	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=i;k<=5;k++){
			printf("  ");
		}
		for(j=2*i-1;j>=1;j--){
			printf("%d ",i);
		}
		printf("\n");
	}
	}

