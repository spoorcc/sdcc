/*
   pr79450.c from the execute part of the gcc torture tests.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

/* PR rtl-optimization/79450 */
#ifndef __SDCC_ds390
unsigned int
foo (unsigned char x, unsigned long long y)
{
  do
    {
      x &= !y;
      x %= 24;
    }
  while (x < y);
  return x + y;
}
#endif
void
testTortureExecute (void)
{
#ifndef __SDCC_ds390
  unsigned int x = foo (1, 0);
  if (x != 1)
    ASSERT (0);
  return;
#endif
}
