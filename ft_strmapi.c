/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:44:22 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/02 11:47:26 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	lenght;
	char	*str;
	size_t	i;

	if (!s || !f)
		return (0);
	lenght = ft_strlen(s);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
