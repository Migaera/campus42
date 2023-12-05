/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:53:25 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/05 21:45:59 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
    if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
    {
        return (0);
    }
    return (1);
}