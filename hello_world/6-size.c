#include<stdio.h>
/**
 *main - print size of various types whit printf
 *return: 0 every time
 */
int main(void)
{
char sChar;
int sInt;
long int sLongInt;
long long int sLongLongInt;
float sFloat;

printf("Size of a char: %i byte(s)\n", sizeof(sChar));
printf("Size of an int: %i byte(s)\n", sizeof(sInt));
printf("Size of a long int: %i byte(s)\n", sizeof(sLongInt));
printf("Size of a long long int: %i byte(s)\n", sizeof(sLongLongInt));
printf("Size of a float: %i byte(s)\n", sizeof(sFloat));
return (0);
}
