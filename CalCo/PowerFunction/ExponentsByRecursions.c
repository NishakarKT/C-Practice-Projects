#include <stdio.h>

int steps = 0;

//Less Efficient

// unsigned long long int power(unsigned long long int m, unsigned long long int n)
// {
//   steps++;
//   if (n == 0)
//   {
//     return 1;
//   }
//   else
//   {
//     return m * power(m, n - 1);
//   }
// }

//More Efficient
unsigned long long int power(unsigned long long int m, unsigned long long int n)
{
  steps++;

  if (n == 0)
  {
    return 1;
  }

  if (n % 2 == 0)
  {
    return power(m * m, n / 2);
  }
  else
  {
    return m * power(m * m, n / 2);
  }
}

unsigned long long int main()
{
  printf("%llu\n", power(2, 40));
  printf("Number of recursions = %d\n", steps);

  return 0;
}