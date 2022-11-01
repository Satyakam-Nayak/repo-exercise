#include <stdio.h>

void add(int a, int b)
{
	printf("%d",a+b);
}

int main()
{
	int a,b;
	printf("enter two number \n");
	scanf("%d %d",&a,&b);
	add(a,b);
       
	return 0;
}

