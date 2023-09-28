#include "main.h"
/**
 * is_palindrome_helper - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 * @start: start of string
 * @end: end of string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (end <= start)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (is_palindrome_helper(s, 0, len - 1));
}
