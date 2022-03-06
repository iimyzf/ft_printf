/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:57:49 by yagnaou           #+#    #+#             */
/*   Updated: 2021/12/01 04:19:31 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
	{
		len += ft_putuns(n / 10);
		len += ft_putchar((n % 10) + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
