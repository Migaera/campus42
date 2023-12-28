/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:05:09 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/21 12:05:09 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dest_ptr;
	unsigned char *src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;

	if (!src_ptr && !dest_ptr)
	{
		return (NULL);
	}
	
	if (src_ptr < dest_ptr)
	{
		while (n--)
		{
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}