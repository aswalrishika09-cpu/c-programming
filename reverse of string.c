#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	printf("enter your word: ");
	gets(name);
	strrev(name);
	printf("reverse of the word is:%s",name);
}
