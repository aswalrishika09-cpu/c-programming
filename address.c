#include<stdio.h>
main()
{
	char a;
	int x;
	float p,q;
	a='A';
	x=123;
	p=10.09;
	q=20.89;
	printf("the address of A:%x\n",&a);
	printf("the address of 123 is:%x\n",&x);
	printf("the address of 10.09 is:%x\n",&p);
	printf("the address of 20.89 is:%x\n",&q);
}
