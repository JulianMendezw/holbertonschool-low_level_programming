#include<stdio.h>

/**
 * start - A function that prints before main.
 */

void __attribute__((constructor))start()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
