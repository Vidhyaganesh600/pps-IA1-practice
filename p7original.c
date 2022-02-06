#include<stdio.h>
struct _complex
 {
  float real,imaginary;
 };
typedef struct _complex Complex;
Complex input_complex() //function defination
{
  Complex k;
  printf("enter a complex number\n ");
  scanf("%f %f",&k.real, &k.imaginary);
  return k;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real= a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%f+i%f + %f+i%f is %f+i%f\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  struct _complex a,b,c;
  a=input_complex(); //function call
  b=input_complex(); //function call
  c=add(a,b);
  output(a,b,c);
  return 0;
}