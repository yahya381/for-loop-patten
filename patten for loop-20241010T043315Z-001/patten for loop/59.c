/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/
#include<stdio.h>
int main(){
	int i,j,k;

	int ch=64;
	for(i=5;i>=1;i--){
		
		for(j=i;j<=5;j++){
			printf("* ",ch+j);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++){
		
		for(j=i;j<=5;j++){
			printf("* ",ch+j);
		}
		printf("\n");
	}
}
