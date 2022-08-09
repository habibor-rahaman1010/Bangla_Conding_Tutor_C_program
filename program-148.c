#include<stdio.h>
#include<math.h>
int main()
{
  int x,i,j;
  printf("please enter first value: ");
  scanf("%d", &i);//5
  printf("please enter second value: ");//2
  scanf("%d", &j);
  x = pow(i,j);
  printf("%d", x);
}
