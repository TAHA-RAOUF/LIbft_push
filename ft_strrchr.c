/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:00:40 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/01 21:34:49 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	lenght = ft_strlen(s);
	while (lenght >= 0)
	{
		if (s[lenght] == (unsigned char)c)
		{
			return ((char *)(s + lenght));
		}
		lenght--;
	}
	return (NULL);
}
