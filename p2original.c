#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c,int largest)
{
  if(a>b && a>c)
  {
    largest=a;
    return a;
  }
  else if(b>a && b>c)
  {
    largest=b;
    return b;
  }
  else
  {
    largest=c;
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("largest number among %d,%d,%d is :%d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest= cmp(a,b,c,largest);
  output(a,b,c,largest);
  return 0;
}