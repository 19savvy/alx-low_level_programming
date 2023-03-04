#include "main"
int check_seperator(char c);

/**
 * check_seperator - checks for Separators of words: 
 * space, tabulation, new line, ,, ;, ., !, ?, \", (, ),
 * {, }
 * @c: an input character
 * return: 1 if seperator else o
 */

int check_seperator(char c)
{
	int k = 0;
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"','{','}','(',')'};

	for (;k <= 12, k++)
	{
		if (c == seperators[k])
			return (1);

	}
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *);
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}
