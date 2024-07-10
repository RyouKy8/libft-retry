/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:30:10 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 09:58:15 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>		//This should be fine but remember that global variables should be illegal though

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	j = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (nb <= d_len)
		return (s_len + nb);
	else
	{
		i = ft_strlen(dest);
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			if ((i + j) == nb - 1)
				break ;
			j++;
		}
		dest[i + j] = '\0';
	}
	return (d_len + s_len);
}
