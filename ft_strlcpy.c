/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:14 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/23 12:11:14 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length;
	size_t j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	length = i;

	if (size == 0)
	{
		return (length);
	}
	else
	{
		while (j < size - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
		return (length);

	}
}