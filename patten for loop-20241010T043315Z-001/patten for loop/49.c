#include<stdio.h>
main(){
/*
9 9 9 9 9 9 9 9 9 
  7 7 7 7 7 7 7 
    5 5 5 5 5 
      3 3 3 
        1
        */
int i,j,k;

for(i=5;i>=1;i--){
	for(k=1;k<=5-i;k++){
		printf("  ");
	}
	for(j=2*i-1;j>=1;j--){
		printf("%d ",2*i-1);
	}
	printf("\n");
}
}
