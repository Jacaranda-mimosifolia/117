#include<stdio.h>
#include<string.h>
char array1[10],*p1=array1;
char array2[10],*p2=array2;
int main()
{
	gets(array1);
	if(strlen(p1)<=5)
	{
		strcpy(p2,p1);
		puts(p2);
	}
	else
	{
		for(int i=0;i<5;i++)
		{
			*(p2+i)=*(p1+i);
		}
		puts(p2);
	}
	return 0;
 } 

