#include <stdio.h>
#include <stdlib.h>
int finder(int*p,int x);
int *p,x;
int main()
{int i,j,n,mahal;
printf("enter the size of Array: \n");
scanf("%d",&n);
if(n==0)
    printf("no array");
else
{p=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
     {printf("enter onsore array as an integer: ");
      scanf("%d", p+i);}
printf("the array A is:\n");
  for(int j=0; j<n; j++)
     printf("%4d", *(p+j));
printf("\n enter the data :\n");
scanf("%d",&x);
mahal= finder(p,x);
if (mahal!=0)
   printf("index=%d",(mahal-1));
else
     printf("not found");
return 0;}}
//*************
int finder(int*p,int x)
{int count=0;
  for(count=1;*p;count++)
    if(*p++ ==x)
return (count);}

