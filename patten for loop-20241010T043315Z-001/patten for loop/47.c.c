/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=1;k<=i;k++){
			printf("  ");
		}
		for(j=9;j>=2*i-1;j--){
			printf("* ");
		}
		printf("\n");
	}
}
