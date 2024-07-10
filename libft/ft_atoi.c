/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:21:42 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 10:11:23 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	get_negs(const char *c, int *counter)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (ft_isspace(c[i]))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			result = -1;
		if (c[i + 1] == '-' || c[i + 1] == '+')
			result = 0;
		i++;
	}
	*counter = i;
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		negs;
	long	result;

	i = 0;
	negs = get_negs(str, &i);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	result *= negs;
	return (result);
}
