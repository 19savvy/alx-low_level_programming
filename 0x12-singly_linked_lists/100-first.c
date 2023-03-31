#include<stdio.h>

/**
 * preMain - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 *   Return: void
 */
void preMain(void) __attribute__ ((constructor));

/**
 * preMain - implementation of myStartupFun
 * Return: void
 */
void preMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
