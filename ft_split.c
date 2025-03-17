/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:22:03 by maminran          #+#    #+#             */
/*   Updated: 2025/03/17 12:31:17 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find_c(const char *str, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*str == c)
			word = 0;
		str++;
	}
	return (count);
}

static void	ft_free(char **tab, int letter)
{
	while (letter >= 0)
		free(tab[letter - 1]);
	free(tab);
}

static char	*ft_create_word(const char *start, const char *end)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = end - start;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_split_helper(char **str, const char *s, char c, size_t *i)
{
	const char	*begin;

	while (*s)
	{
		while (*s == c)
			s++;
		begin = s;
		while (*s && *s != c)
			s++;
		if (begin != s)
		{
			str[*i] = ft_create_word(begin, s);
			if (!str[*i])
			{
				ft_free(str, *i);
				return ;
			}
			(*i)++;
		}
	}
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	i;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_find_c(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	ft_split_helper(str, s, c, &i);
	str[i] = NULL;
	return (str);
}
