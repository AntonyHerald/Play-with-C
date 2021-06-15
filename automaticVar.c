#include <stdio.h>

int main()
{
  auto int j = 100;
  {
    auto int j= 200;
    {
      auto int j = 300;
      printf ( "\t The Inner most %d \n", j);
    }
    printf ( "\t The Inner  %d \n",j);
  }
  printf( "\t The Outer %d\n", j);

  return 0;
}
