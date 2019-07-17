#include<stdio.h>
int count = 0;
int IsDanger(int row,int col,int a[8][8])
{
	int i,j;
	for(j = 0;j < 8;j++)
	{
		if(a[j][col] == 1)
		{
			return 0;
		}
	}
	for(i = row,j = col;i <8&&j < 8;i++,j++)
	{
		if(a[i][j] == 1)
		{
			return 0;
		}
	}
	for(i = row,j = col;i >= 0 &&j >= 0;i--,j--)
	{
		if(a[i][j] == 1)
		{
			return 0;
		}
	}
	for(i = row,j = col;i >= 0 &&j < 8 ;i--,j++)
	{
		if(a[i][j] == 1)
		{
			return 0;
		}
	}for(i = row,j = col;i < 8 &&j >= 0;i++,j--)
	{
		if(a[i][j] == 1)
		{
			return 0;
		}
	}
	return 1;
}
void eightqueue(int row,int col,int a[8][8])
{
	int chese[8][8];
	int i,j;
	
	for(i = 0;i < 8;i++)
	{
		for(j = 0;j < 8;j++)
		{
			chese[i][j] = a[i][j];
		}
	}
	
	if(row == 8)
	{
		for(i = 0;i < 8;i++)
		{
			for(j = 0;j < 8;j++)
			{
				printf("%d",chese[i][j]);
			}
			printf("\n");
		}
		count++;
		printf("µÚ%dÖÖ\n",count);
	}
	
	else
	{
		
		for(j = 0;j < 8;j++)
		{
			if(IsDanger(row,j,a))
			{
				for(i = 0;i < 8;i++)
				{
					chese[row][i] = 0;
				}
				chese[row][j] = 1;
				eightqueue(row+1,8,chese);
			}
		}
	}
}
int main()
{
	int a[8][8];
	int i,j;
	for(i = 0;i < 8;i++)
	{
		for(j = 0;j < 8;j++)
		{
			a[i][j] = 0;
		}
	}
	eightqueue(0,8,a);
}
