#include <stdio.h>

int power(int n , int p);

int main()
{
  printf("Enter a number : ");
  int n, p;
  scanf("%d",&n);
  printf("Enter a power : ");
  scanf("%d",&p);
  printf("The result is : %d",power(n,p));
  return 0;
}

int power(int n , int p)
{
  if(p==0)
    return 1;
  return n*power(n,p-1);
}