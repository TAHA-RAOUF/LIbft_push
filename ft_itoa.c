/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:56:07 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/05 13:11:04 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	long	nb;
	int		j;

	j = 0;
	nb = n;
	if (n == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		j = 1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		j++;
	}
	return (j);
}

static char	*zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		lenght;
	char	*str;

	lenght = size(n);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (NULL);
	str[lenght--] = '\0';
	if (n == 0)
		return (zero(str));
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (lenght >= 0 && nb > 0)
	{
		str[lenght] = (nb % 10) + '0';
		nb = nb / 10;
		lenght--;
	}
	return (str);
}
