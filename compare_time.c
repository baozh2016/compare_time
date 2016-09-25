#include <stdio.h>
#include <time.h>

void main(void)
{
	int i,j,k;
	int sum1=0;
	int sum2=0;
	clock_t start1,end1,start2,end2;
	double time1,time2;
	start1 = clock();
	for(i=0;i<20;i++)
		for(j=0;j<100;j++)
			for(k=0;k<5000;k++)
				sum1+=1;
	end1 = clock();
	start2 = clock();
	for(i=0;i<5000;i++)
		for(j=0;j<100;j++)
			for(k=0;k<20;k++)
				sum2+=1;
	end2 = clock();
	time1 = (double)(end1 - start1);
	time2 = (double)(end2 - start2);
	printf("time1:%lf,time2:%lf\n",time1,time2);
}