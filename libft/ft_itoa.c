/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:03:05 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 08:03:32 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	ft_intlen(long n)
{
	if (n < 0)
		return (ft_intlen(-n) + 1);
	if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	str[--len] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n == 0)
		return (ft_strcpy(str, "0"));
	while (len && n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
