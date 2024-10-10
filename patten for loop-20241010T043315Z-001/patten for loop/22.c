/*#include<stdio.h>
int main(){
	int rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	
	char i,j;
	int a=65,b=74;
	for(i=a;i<=b;i++){
		for(j=b;j>=i;j--){
			printf("%c",j);
		}
		printf("\n");
		
	}
}*/
#include<stdio.h>
int main(){
	int rows;
	printf("enter the number of rows");
	sacnf("%d",&rows);
	
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("*");
		}
		printf("\n");
	}
}
