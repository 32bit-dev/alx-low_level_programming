#include <stdio.h>
/**
 * main - print the size of various type of computer
 * Description: using the main function
 * This programme prints the sizes of various types of computer it is run on
 * Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("size of a char: %Id byte(s)\n", sizeof(c));
printf("size of an int: %Id bytes(s)\n", sizeof(i));
printf("size of a long int: %Id byte(s)\n", sizeof(li));
printf("size of a long long int: %Id bytes(s)\n", sizeof(lli));
printf("size of a float: %Id byte(s)\n", sizeof(f));
return (0);
}
