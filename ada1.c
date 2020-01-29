#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,m[10],key[10],i,j,l,x,d;
 int array[20];
 scanf("%d",&n);
 
for(i=0;i<n;i++)
{
 scanf("%d",&m[i]);
 scanf("%d",&key[i]);
 for(j=0;j<m[i];j++)
  { scanf("%d",&array[j]);
   }
}
for(l=0;l<n;l++)
{d=1;
 for(x=0;x<m[l];x++)
 { if(key[l]==array[x])
   {
    d=0;
  }
 else
   {
     d=1;
   }
 }
if(d==0)
printf(" 1 ");
else
printf(" -1 ");
}
}
