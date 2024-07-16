#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int y = 3e6;
	printf("%d \n", y);
	// atom light
	y /= 10000;
	printf("%d \n", y);
	if (y != 0)
		stderr("Error why?");
	return 0;
}
