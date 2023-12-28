/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:04:52 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/28 17:04:52 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (size == 0 || i >= size)
	{
		return (i);
	}
	else
	{
		while (j < size - i && src[j] != '\0')
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (i + j);
	}
}