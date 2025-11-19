#include<stdio.h>
int main(){
	int rows,i,j,space,a=1;
printf("enter the number of rows for the triangle: ");
scanf("%d",&rows);
for(i=0;i<rows;i++){
	for(space=1;space<rows-i;space++){
		printf(" ");}
	
	for(j=0;j<=i;j++){
		if(i==0||j==0){
			a=1;
		
		}
		else {
			a= a*(i-j+1)/j;
		}
		printf("%3d",a);
	
	}
	printf("\n");
       }	
    }
