#include<stdio.h>
void fun()
{
	char a;
	scanf("%c",&a);
	if(a != '#')
	{
		fun();
	}
	if(a != '#')
	{
		printf("%c",a);
	}
}
int main()
{
	fun();
	return 0;
}
