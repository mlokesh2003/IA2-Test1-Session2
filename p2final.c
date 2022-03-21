#include<stdio.h>
int input_side()
{
  int side;
  printf("Enter side of the triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b&&b!=c&&c!=a)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isScalene)
{
  if(isScalene)
  {
    printf("The triangle with sides %d,%d and %d is scalene",a,b,c);
  }
  else
  {
    printf("The triangle with sides %d %d and is %d is not scalene",a,b,c);
  }
}
int main()
{
  int ab=input_side();
  int bc=input_side();
  int ca=input side();
  int result=check_scalene(ab,bc,ca);
  output(ab,bc,ca,result);
  return 0;
}