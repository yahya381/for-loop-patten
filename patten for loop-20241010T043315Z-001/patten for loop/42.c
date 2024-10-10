#include<stdio.h>
int main(){
	/*
	    0 
      1 0 1 
    2 1 0 1 2 
  3 2 1 0 1 2 3 
4 3 2 1 0 1 2 3 4
*/
int i,j,k;
for(i=0;i<=4;i++){
	for(k=0;k<=4-i;k++){
		printf("  ");
	}
	for(j=i;j>=0;j--){
		printf("%d ",j);
	}
	for(j=1;j<=i;j++){
		printf("%d ",j);
	}
	printf("\n");
}
}
