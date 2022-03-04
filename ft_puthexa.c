/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 03:04:54 by yagnaou           #+#    #+#             */
/*   Updated: 2021/12/13 10:08:22 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char c)
{
	char	str[17];
	char	*base;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (c == 'p')
		len += ft_putstr("0x");
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	while ((n / 16) != 0)
	{
		str[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	str[i] = base[n % 16];
	len += i + 1;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (len);
}
