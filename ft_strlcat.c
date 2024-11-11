/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:41:44 by moraouf           #+#    #+#             */
/*   Updated: 2024/10/29 20:37:26 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght_dest;
	size_t	lenght_src;

	lenght_dest = ft_strlen(dst);
	lenght_src = ft_strlen(src);
	if (!size)
	{
		return (lenght_src);
	}
	if (lenght_dest >= size)
		return (lenght_src + size);
	i = 0;
	while ((i < (size - lenght_dest - 1)) && src[i])
	{
		dst[lenght_dest + i] = src[i];
		i++;
	}
	dst[lenght_dest + i] = '\0';
	return (lenght_dest + lenght_src);
}
