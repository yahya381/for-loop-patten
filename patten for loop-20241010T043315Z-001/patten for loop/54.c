/*
            1 
          1 2 
        1 2 3 
      1 2 3 4 
    1 2 3 4 5 
      1 2 3 4 
        1 2 3 
          1 2 
            1 
            */
#include<stdio.h>
int main(){
	int i,j,k;
	int n=5;
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(k=n-i;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

	

