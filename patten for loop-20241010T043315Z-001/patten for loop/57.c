/*
         3 
       2 3 
     1 2 3 
   0 1 2 3 
     1 2 3 
       2 3 
         3 
         */
      
#include<stdio.h>
int main(){
	int i,j,k;
	int n=3;
	
	for(i=n;i>=0;i--){
		for(k=0;k<=i;k++){
			printf(" ");
		}
		for(j=i;j<=n;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(k=i;k>=0;k--){
			printf(" ");
		}
		for(j=i;j<=n;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
