/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:16:48 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/26 19:09:46 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	tmp;

	tmp = n;
	count = 0;
	if (tmp < 0)
	{
		tmp = -tmp;
		count += ft_putchar('-');
	}
	if (tmp < 10)
		count += ft_putchar(tmp + 48);
	else
	{
		count += ft_putnbr(tmp / 10);
		count += ft_putchar(((tmp % 10) + '0'));
	}
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	count += ft_putchar(((n % 10) + '0'));
	return (count);
}

int	ft_putnbr_hex(unsigned int n, int uppercase)
{
	int		count;
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex(n / 16, uppercase);
	count += ft_putchar(base[n % 16]);
	return (count);
}