#include<stdio.h>
int gcd(int x,int y)
{
if (x==y)
{
return x;
}
else if(x>y)
{
gcd(x-y,y);
}
else
{
gcd(x,y-x);
}
}
void toh(int m,char source,char desti,char temp)
{
  if(m==1)
{ printf("\nmove the block 1 from %c to %c",source,desti);return ;}

toh(m-1, source, temp, desti);
printf("\n Move the block %d from  %c to  %c", m, source, desti);
toh(m-1, temp,desti,source);
}
void main()
{
int n,m,x,y,d;

printf("1.tower of hanoi 2.gcd");
scanf("%d",&n);
switch(n)
{
 case 1:printf("enter the number of blocks:");
        scanf("%d",&m);
        toh(m,'A','C','B');
        break;
 case 2:printf("enter the two numbers");
        scanf("%d %d",&x,&y);
        d=gcd(x,y);
        printf("the gcd of two number is %d",d);
        break;
}
}
