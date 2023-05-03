// C program to show the side effect of using %s in printf
#include <stdio.h>
int main()
{
	// % is intentionally put here to show side effects of using printf(str)
	puts("Geek%sforGeek%s");
	return 0;
}
