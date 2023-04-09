#include <stdio.h>

/* This program demonstrates a pointer manipulation. */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98; 	// Set the sixth element after p to 98
	printf("a[2] = %d\n", a[2]); 	// Expect 98 to be printed
	return (0);
}

