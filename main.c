/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:20:49 by pauescob          #+#    #+#             */
/*   Updated: 2023/12/05 22:12:26 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_isalpha(char c);
int ft_isdigit(char n);
int ft_isalnum(char c);

int main(void)
{
    char n = '?';
    int res;

    res = ft_isalnum(n);
    printf("%d", res);
    return 0;
}