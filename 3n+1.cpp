#include<stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int i,j;
while(scanf("%d %d",&i,&j)!=EOF)
{
int itemp=i,jtemp=j,count,maxcount=0;
if(i>j)
{
swap(&i,&j);
}
while(i<=j)
{
count=1;
int n=i;
while(n!=1)
{
if(n%2==0)
{
n=n/2;
}
else
{
n=3*n+1;
}
count++;
}
if(count>maxcount)
{
maxcount=count;
}
i++;
}
printf("%d %d %d\n",itemp,jtemp,maxcount);
}
return 0;
}
