#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, rin;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = rin = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[rin] != '\0')
		rin++;
	conct = malloc(sizeof(char) * (i + rin + 1));

	if (conct == NULL)
		return (NULL);
	i = rin = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[rin] != '\0')
	{
		conct[i] = s2[rin];
		i++, rin++;
	}
	conct[i] = '\0';
	return (conct);
}

