#include<stdio.h>
main(){
	int i,j,k;
	/*for(i=1;i<=5;i++){
		for(k=i;k<=5;k++){
			printf(" ");
		}
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/
	/*
    5 
   5 4 
  5 4 3 
 5 4 3 2 
5 4 3 2 1*/


for(i=1;i<=5;i++){
	for(j=5;j>=i;j--){
		printf("%d ",j);
	}
	printf("\n");
}
}
