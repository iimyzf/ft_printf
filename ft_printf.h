/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:28:40 by yagnaou           #+#    #+#             */
/*   Updated: 2021/12/13 10:23:54 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int num);
int	ft_putuns(unsigned int n);
int	ft_puthexa(unsigned long n, char c);
int	ft_printf(const char *str, ...);

#endif
