/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:37:51 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 08:44:26 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	unsigned char ch;
	size_t	i;

	src = unsigned char *s;			//Should probably write " (unsigned char *)s; " according to yoongee, but unsure what's the diff
	ch = c;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
