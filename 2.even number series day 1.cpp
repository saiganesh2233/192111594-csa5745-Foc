#include<stdio.h>
int main() 
{
  int r1, r2, remainder, i;
  printf("Start");
  scanf("%d",&r1);
  printf("End");
  scanf("%d",&r2);
  printf("\nThe even numbers between %d and %d are: ", r1, r2);
  for (i = r1; i <= r2; ++i)
   {
    remainder = i % 2;
    if (remainder == 0)
      printf("\n%d", i);
}
return 0;
}
