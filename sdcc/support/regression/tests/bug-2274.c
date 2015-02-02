/*
  bug-2274.c
*/

#include <testfwk.h>

char func_0 (int i)
{
  return i + 10;
}

char func_1 (char i)
{
  return i + 20;
}

int func_2 (int i)
{
  return i + 30;
}

int func_3 (char i)
{
  return i + 40;
}

void testUndef (void) __reentrant
{
  /* SDCC should not crash, but only prints warning messages. */
  char a = func_0 (a);
  char b = func_1 (b);
  int c = func_2 (c);
  int d = func_3 (d);
}

void testBug (void)
{
  testUndef ();
}
