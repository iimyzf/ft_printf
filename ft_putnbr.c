/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:45:02 by yagnaou           #+#    #+#             */
/*   Updated: 2021/12/13 08:49:21 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	unsigned int	nb;
	int				len;

	len = 0;
	nb = num;
	if (num < 0)
	{
		len += ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putchar((nb % 10) + '0');
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}
