#include<stdio.h>
int input_n()
{
  int n;
  printf("enter a number to add\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1,i<=n;i++);
  {
    sum=sum+i;
  }
  printf("sum is %d\n",sum);
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1,i<=n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",sum);
}
int main