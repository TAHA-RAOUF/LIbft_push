/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:03:27 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/02 17:27:10 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*x;
	size_t			i;

	s = (unsigned char *)s1;
	x = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != x[i])
			return (s[i] - x[i]);
		i++;
	}
	return (0);
}
