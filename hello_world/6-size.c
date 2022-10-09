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

printf("sixe of a char: %i bite(s)\n", sizeof(sChar));
printf("sixe of an int: %i bite(s)\n", sizeof(sInt));
printf("sixe of a long int: %i bite(s)\n", sizeof(sLongInt));
printf("sixe of a long long int: %i bite(s)\n", sizeof(sLongLongInt));
printf("sixe of a float: %i bite(s)\n", sizeof(sFloat));
return (0);
}
