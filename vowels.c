#include<stdio.h>
int main(){
	char a;
	printf("enter your choice");
	scanf("%c",& a);
	switch(a)
	{
		case'a': case'e':case'i':case'o':case'u':case'A':case'E':case'I':case'O':case'U':{
			printf("vowels");
			break;
	}
	default:{
		printf("consonent");
		break;
	}
   }  
}
