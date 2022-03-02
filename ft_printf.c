/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:52:57 by yagnaou           #+#    #+#             */
/*   Updated: 2021/12/14 18:36:16 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfv2(const char *str, va_list vlist, int i, int len)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[++i] == 'c')
				len += ft_putchar(va_arg(vlist, int));
			else if (str[i] == 's')
				len += ft_putstr(va_arg(vlist, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				len += ft_putnbr(va_arg(vlist, int));
			else if (str[i] == 'u')
				len += ft_putuns(va_arg(vlist, unsigned int));
			else if (str[i] == 'p')
				len += ft_puthexa(va_arg(vlist, unsigned long), str[i]);
			else if (str[i] == 'x' || str[i] == 'X')
				len += ft_puthexa(va_arg(vlist, unsigned int), str[i]);
			else
				len += ft_putchar(str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	vlist;

	i = 0;
	len = 0;
	va_start(vlist, str);
	len = ft_printfv2(str, vlist, i, len);
	va_end(vlist);
	return (len);
}