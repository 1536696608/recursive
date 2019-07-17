#include<stdio.h>
int erfen(int* a,int key,int high,int low);
int main()
{
	int a[15] = {1,3,5,7,9,15,19,26,34,44,51,63,77,78,83};
	erfen(a,39,14,0);
	return 0;	
}
int erfen(int* a,int key,int high,int low)
{
	int middle = (high+low)/2;
	if(a [middle] == key)
	{
		printf("middle = %d",middle+1);
		return middle+1;
	}
	if(low > high)
	{
		printf("no key\n");
		return -1;
	}
	if(key > a[middle])
	{
		erfen(a,key,high,middle+1);
	}
	if(key < a[middle])
	{
		erfen(a,key,middle - 1,low);
	}
}
