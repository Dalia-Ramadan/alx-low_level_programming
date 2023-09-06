#include "main.h"
#include <stdio.h>
int main (int argc, char *argv[])
{
	if (argc >= 0)
    {
      printf("%s\n", *argv++);
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}
