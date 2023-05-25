#include<stdio.h>
struct grade
{
	float grade1;
	float grade2;
	float average;
}part[3];
int main()
{
	for(int i=0;i<3;i++)
	{
		scanf("%f%f",&part[i].grade1,&part[i].grade2);
		part[i].average=(part[i].grade1+part[i].grade2)/2;
		printf("part[%d].average=%f\n",i,part[i].average);
	}
	return 0;
}
