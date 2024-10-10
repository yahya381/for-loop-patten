/*
I  I  I  I   I   I   I   I  I 
   G  G  G   G   G   G   G 
      E  E   E   E  E 
          C   C  C 
              A 
			  */
			  #include<stdio.h>
			  int main(){
			  	int i,j,k;
			  	char ch='I';
			  	
			  	for(i=0;i<=5;i++){
			  		for(k=1;k<=5-i;k++){
		            printf("  ");
	}
			  		for(j=0;j<=9*2-i;j++){
			  			printf("%c ",ch+j);
					  }
			  		printf("\n");
			  		ch--;
				  }
			  }
