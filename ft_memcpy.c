/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:28:35 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/21 11:28:35 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ntr;

	if (!dest && !src)
	{
		return (NULL);
	}

	ptr = (unsigned char *)dest;
	ntr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ntr[i];
		i++;
	}
	return (dest);
}
