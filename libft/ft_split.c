/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:25:51 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 09:27:06 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Hardest one yet so might need to revise over and over to really get it*/

include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	j;
	size_t	i;
	size_t	k;

	j = 0;
	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			result[k++] = ft_strndup(s + j, i - j);
	}
	result[k] = NULL;
	return (result);
}
