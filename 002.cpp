#include<stdio.h>
int a[2][3]={{1,2,3},{4,5,6}};
static int b[3][2];
int main()
{
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
		{
			b[i][j]=a[j][i];
			if(j!=2)
			{printf("a[%d][%d]=%d\tb[%d][%d]=%d\n",\
			j+1,i+1,a[j][i],i+1,j+1,b[i][j]);}	
		}
	}
	return 0;
}
