#include<stdio.h>

void main()
{
int q,p,smax,sflag=0;
int i=0,j,flag[10],n=0,kill=0,sum=0,available=0;
int ui[10];
int max[10],alloc[10],need[10];
printf("Enter the no of processes:"); //q is no.of processes
scanf("%d",&q);
printf("Enter the no of resources:");//p is no.of resources
scanf("%d",&p);
smax=p+q;

for(i=0;i<q;i++)
{
//sum of all max[i]<p+q;
if(i==0)
{
max[i]=p-1;//random value which statisfies 2 conditions
}
else
{
max[i]=1;
}
}
