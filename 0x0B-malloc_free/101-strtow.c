#include "main.h"
#include <stdlib.h>

/**
 * is_space - looks for space character
 * @c: soace
 *
 * Return: always a success
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * word_count - counts words
 * @str: String to count words
 *
 * Return: Always a success
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * get_word - returns word found
 * @str: sting to check
 *
 * Return: always a success
 */
char *get_word(char *str)
{
	int i, len = 0;
	char *word;

	while (str[len] && !is_space(str[len]))
	{
		len++;
	}

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		word[i] = *str;
		str++;
	}
	word[len] = '\0';
	return (word);
}

/**
 * strtow - splits string into two
 * @str: string to split
 *
 * Return: split string
 */
char **strtow(char *str)
{
	int i, tot_words = (word_count(str)), word_index = 0;
	char **words, *word;

	if (tot_words == 0)
	{
		return (NULL);
	}
	words = (char **)malloc(sizeof(char *) * (tot_words + 1));
	if (!words)
	{
		return (NULL);
	}
	while (*str)
	{
		if (is_space(*str))
		{
			str++;
		}
		else
		{
			word = get_word(str);
			if (!word)
			{
				for (i = 0; i < word_index; i++)
				{
					free(words[i]);
				}
				free(words);
				return (NULL);
			}
			words[word_index] = word;
			word_index++;
			while (*str && !is_space(*str))
			{
				str++;
			}
		}
	}
	words[word_index] = NULL;
	return (words);
}
