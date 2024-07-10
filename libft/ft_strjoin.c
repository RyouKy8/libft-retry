/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:29:28 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 09:29:33 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(len + 1);
	if (res)
	{
		ft_strlcpy(res, s1, len + 1);
		ft_strlcat(res, s2, len + 1);
	}
	return (res);
}
