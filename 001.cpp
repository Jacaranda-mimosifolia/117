#include<stdio.h>
#include<string.h>
char array[100],*p=array;
int count1=0,count2=0,count3=0;
int count4=0,count5=0;
int main()
{
	gets(array);
	for(int i=0;i<strlen(array);i++)
	{
		if('a'<=*(p+i) && *(p+i)<='z')
		{count1++;}
		else if('A'<=*(p+i) && *(p+i)<='Z')
		{count2++;}
		else if('0'<=*(p+i) && *(p+i)<='9')
		{count3++;}
		else if(*(p+i)==32)
		{count4++;}
		else
		{count5++;}
	}
	printf("Ӣ�Ĵ�д������%d\n",count1);
	printf("Ӣ��Сд������%d\n",count2);
	printf("���ָ�����%d\n",count3);
	printf("�ո������%d\n",count4);
	printf("�����ַ�������%d\n",count5);
	return 0;
}
