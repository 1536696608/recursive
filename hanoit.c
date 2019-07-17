#include<stdio.h>
int hanoit(int n,char A,char B,char C)
{
	if(n == 1)
	{
		printf("%d从%c移动到%c\n",n,A,B);
		return 1;
	}
	
	hanoit(n-1,A,C,B);
	printf("%d从%c移动到%c\n",n,A,B);
	hanoit(n-1,C,B,A);
	
}
int main()
{
	hanoit(3,'A','B','C');
	return 0;
}
