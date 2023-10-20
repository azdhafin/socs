#include <stdio.h>

int main() {
  int tc, N, ice[111], perimeter, area;
  int a, b;
  FILE * file;
  file = fopen("testdata.in", "r");
  fscanf(file, "%d\n", & tc); // Reading the number of test case, useful for printing
  for (a = 1; a <= tc; a++) 
  { // For Each test case
    area = 0;
    perimeter = 0;
    fscanf(file, "%d\n", & N); // Read the Number of stacks
    for (b = 0; b < N; b++) 
	{
      fscanf(file, "%d", & ice[b]); // Read the Xi of the stack
    }
    for (b = 0; b < N; b++) 
	{
      /*Perimeter is total length of sides exposed. For an individual cube it is 12 x side, here side is 2.
      // Total perimeter of 1 stack 4 * 2 (side of stack) * number stacked 
      // But we are stacking and there are stacks adjacent, so we have to make adjustments
      */
      perimeter = perimeter + (8 * ice[b] - (4 * (ice[b] - 1)));
      /*
      // if there is stack before, we have to reduce perimeter of the stack.
      */

      area = area + (4 * ice[b]);

      /* the stacks can be of varying height, if the current stack is not last stack. 
      // we have to check the number stacked and make adjustment */
      if (b != N - 1) 
	  {
        if (ice[b] <= ice[b + 1]) 
		{ // 
          perimeter = perimeter - (4 * ice[b]);
        } 
		else 
		{
          perimeter = perimeter - (4 * ice[b + 1]);
        }
      }
    }
    printf("Case #%d: %d %d\n", a, perimeter, area);
  }
  return 0;
}
