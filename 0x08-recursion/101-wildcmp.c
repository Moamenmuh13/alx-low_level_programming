#include "main.h"
/**
 * wildcmp_helper - Helper func to compare two strings with wildcards.
 * @s1: First string
 * @s2: Second string with wildcard '*'.
 * Return: 1 if strings match, otherwise 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp_helper(s1, s2 + 1));
if (*s1 == '\0')
return (wildcmp_helper(s1, s2 + 1));
if (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1))
return (1);
}
if (*s1 == *s2)
{
if (*s1 == '\0')
return (1);
return (wildcmp_helper(s1 + 1, s2 + 1));
}
return (0);
}

/**
* wildcmp - Helper func to compare two strings with wildcards.
* @s1: First string
* @s2: Second string with wildcard '*'.
* Return: 1 if strings match, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
return (wildcmp_helper(s1, s2));
}
