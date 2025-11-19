#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],row,col;
	printf("enter the element of first matrix");
	
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&a[row][col]);
		}
		}
		printf("the first matrix is\n");
		
		for(row=0;row<3;row++)
		{
			
		for(col=0;col<3;col++)
		{
			printf("%4d",a[row][col]);
		}
		printf("\n");}
		
		printf("enter the element of second matrix\n");
		for(row=0;row<3;row++){
			for(col=0;col<3;col++){
				scanf("%d",&b[row][col]);
			}
	}
	printf("the second matrix is\n");
	for(row=0;row<3;row++){
			for(col=0;col<3;col++){
				printf("%4d",b[row][col]);
			}
			printf("\n");
			   }
	printf("addition\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			c[row][col]=a[row][col]+b[row][col];
			printf("%d\t",c[row][col]);
		} printf("\n");
	}
     }
	
