#include "main.h"
#include <stdio.h>
/**
 * wildcmp - a function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * The special char * can replace any string (including an empty string)
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Return integer 1 if the strings are same, else return integer 0.
 */
int wildcmp(char *s1, char *s2)
{
	char end_of_line = '\0';
	char *tmp;

	tmp = &end_of_line;

	return (check1(s1, s2, tmp) || check2(s1, s2, tmp));
}
/**
 * check1 - a function that checks if a and b are the same
 * @a: the first character
 * @b: the second character
 * @tmp: a temporary pointer
 *
 * Return: returns 1 if the same, else returns 0
 */
int check1(char *a, char *b, char *tmp)
{
	if (*b == '*')
	{
		a = wildcard(a, b, tmp, 1);
		b = (*(b + 1) == '*') ? last_wild_card('*', b, tmp) : b;
		b++;
	}
	if (*a == '*')
	{
		b = wildcard(b, a, tmp, 1);
		a = (*(a + 1) == '*') ? last_wild_card('*', a, tmp) : a;
		a++;
	}
	if (*a != *b)
	{
		return (0);
	}
	else if (*a == '\0' && *b == '\0')
	{
		return (1);
	}
	else
	{
		return (check1(a + 1, b + 1, tmp));
	}
}
/**
 * check2 - a function that checks if a and b are the same
 * @a: the first character
 * @b: the second character
 * @tmp: a temporary pointer
 *
 * Return: returns 1 if the same, else returns 0
 */
int check2(char *a, char *b, char *tmp)
{
	if (*b == '*')
	{
		a = wildcard(a, b, tmp, 2);
		b = (*(b + 1) == '*') ? last_wild_card('*', b, tmp) : b;
		b++;
	}
	if (*a == '*')
	{
		b = wildcard(b, a, tmp, 2);
		a = (*(a + 1) == '*') ? last_wild_card('*', a, tmp) : a;
		a++;
	}
	if (*a != *b)
	{
		return (0);
	}
	else if (*a == '\0' && *b == '\0')
	{
		return (1);
	}
	else
	{
		return (check2(a + 1, b + 1, tmp));
	}
}
/**
 * wildcard - a function that checks for wildcard between two strings
 * @a: the first string
 * @b: the second string
 * @tmp: return valued variable
 * @chk: integer that represents if its calling function is check1 or check2
 *
 * Return: return the pointer to the character after the wildcard.
 */
char *wildcard(char *a, char *b, char *tmp, int chk)
{
	if (*a == *(b + 1))
	{
		if (chk == 1)
		{
			return (a);
		}
		else
		{
			tmp = a;
		}
	}

	if (*a == '\0')
	{
		if (chk == 1)
		{
			return (a);
		}
		else
		{
			return (tmp);
		}
	}
	else
	{
		if (*(b + 1) == '*')
			b++;
		else
			a++;
		return (wildcard(a, b, tmp, chk));
	}
}
/**
 * last_wild_card - a function that accepts a character and a string and
 * returns the address of the last sequential occurance of the character
 * in the string.
 * @a: the character
 * @b: the string
 * @tmp: this is a tmp variable
 *
 * Return: returns a pointer to the address of the last occurance.
 */
char *last_wild_card(char a, char *b, char *tmp)
{
	if (a == *b)
		tmp = b;

	if (*b != a)
	{
		return (tmp);
	}
	else
	{
		++b;
		return (last_wild_card('*', b, tmp));
	}
}
