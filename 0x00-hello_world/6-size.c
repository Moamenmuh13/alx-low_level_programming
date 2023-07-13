#include <stdio.h>
/**
*main - Entry point
*
*This funtion servs as the entry point of the program.
*It prints the sizes of various types on the computer.
*
*Return: Always 0 (success)
*/
int main(void)
{
int num;
long int long_number; 
long long int long_long_number
char c ;
float f ;

    printf("Size of an int: %lu byte(s)\n", sizeof(num));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long_number));
    printf("Size of a char: %lu byte(s)\n", sizeof(c));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long_number));
    printf("Size of a float: %lu byte(s)\n", sizeof(f));
    return 0;
}
