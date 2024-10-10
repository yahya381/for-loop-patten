/*
            4 
          4 3 
        4 3 2 
      4 3 2 1 
    4 3 2 1 0 
      4 3 2 1 
        4 3 2 
          4 3 
            4
            */
#include<stdio.h>
int main(){
	int i,j,k;
	int n=4;
	
	for(i=n;i>=0;i--){
		for(k=0;k<=i;k++){
			printf(" ");
		}
		for(j=n;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(k=i;k>=0;k--){
			printf(" ");
		}
		for(j=n;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
