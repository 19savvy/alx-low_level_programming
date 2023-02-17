#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
  int len;
  char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

  len = 59;
  if (write(STDERR_FILENO, msg, len) != len)
    {
      return (1);
    }
  return (1);
}

