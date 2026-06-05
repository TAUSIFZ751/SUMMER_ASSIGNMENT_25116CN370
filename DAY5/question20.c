// largest prime factor

#include <stdio.h>

int main()
{
  int num, largest = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num % 2 == 0)
  {
       largest = 2;
       num = num / 2;
  }

    for (int i = 3; i * i <= num; i = i + 2)
    {
      while (num % i == 0)
      {
        largest = i;
        num = num / i;
      }
    }

    if (num > 2)
    {
        largest = num;
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}