#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the size of array"\n);
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n]);
{
  for(int i=0;i<n;i++)
  {
    printf("enter the values into the array");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n]);
{
  for(int i=0;i<n;i++)
}