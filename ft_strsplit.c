/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgheorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 17:04:45 by adgheorg          #+#    #+#             */
/*   Updated: 2017/01/11 16:52:16 by adgheorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i])
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1])
				count++;
			i++;
		}
	}
	return (count);
}

static char		*make_word_copy(char const *s, char c, int *i)
{
	int		j;
	int		k;
	char	*word;

	j = 0;
	k = 0;
	while (s[j] && s[j] != c)
		j++;
	*i = *i + j;
	word = ft_strnew(sizeof(char) * (j + 1));
	while (k < j)
	{
		word[k] = s[k];
		k++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL ||
			!(words = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	if (s[i])
	{
		if (s[i] != c)
			words[j++] = make_word_copy(s, c, &i);
		while (s[i])
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1])
				words[j++] = make_word_copy(s + i + 1, c, &i);
			else
				i++;
		}
	}
	words[j] = 0;
	return (words);
}
