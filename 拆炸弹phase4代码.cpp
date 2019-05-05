
#include <stdio.h>
#include <stdlib.h>
//                %ecx    %ebx   %esi
int func4(int a, int b, int c)
{
    int tmp = (((c - b) + ((c - b) >> 31)) >> 1) + b;
    if (tmp <= a) 
	{
        if (tmp == a)
		 {
            return (0);
         } else
		  {
            return func4(a, tmp + 1, c) * 2 + 1;
          }
    } 
	else 
	{
        return func4(a, b, tmp - 1) * 2;
    }
}
 
int main()
{
    int i, result;
    for (i = 0; i < 14; ++i) {
        result = func4(i, 0, 14);
        if (result == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
} 
