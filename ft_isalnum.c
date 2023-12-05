/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:43:34 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/05 22:12:09 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c);
int ft_isdigit(char n);

int ft_isalnum(char c)
{
    if (ft_isalpha(c) == '0' || ft_isdigit(c) == '0')
    {
        return (0);
    }
    return (1);
}