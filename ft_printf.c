/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:31:29 by elbarry           #+#    #+#             */
/*   Updated: 2025/11/27 21:48:27 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr((unsigned long)va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 1));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			count += handle_conversion(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>

// int    main(void)
// {
//     int    x;

//     int ret1, ret2;
//     printf("===== TEST %%c =====\n");
//     ret1 = printf("printf : [%c]\n", 'A');
//     ret2 = ft_printf("ft_printf : [%c]\n", 'A');
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%s =====\n");
//     ret1 = printf("printf : [%s]\n", "Hello");
//     ret2 = ft_printf("ft_printf : [%s]\n", "Hello");
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%s (NULL) =====\n");
//     ret1 = printf("printf : [%s]\n", (char *)0);
//     ret2 = ft_printf("ft_printf : [%s]\n", (char *)0);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%d / %%i =====\n");
//     ret1 = printf("printf : [%d] [%i]\n", -42, 42);
//     ret2 = ft_printf("ft_printf : [%d] [%i]\n", -42, 42);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%u =====\n");
//     ret1 = printf("printf : [%u]\n", 3000000000u);
//     ret2 = ft_printf("ft_printf : [%u]\n", 3000000000u);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%x =====\n");
//     ret1 = printf("printf : [%x]\n", 48879);
//     ret2 = ft_printf("ft_printf : [%x]\n", 48879);
// 	printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%X =====\n");
//     ret1 = printf("printf : [%X]\n", 48879);
//     ret2 = ft_printf("ft_printf : [%X]\n", 48879);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%p =====\n");
//     x = 42;
//     ret1 = printf("printf : [%p]\n", &x);
//     ret2 = ft_printf("ft_printf : [%p]\n", &x);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%p (NULL) =====\n");
//     ret1 = printf("printf : [%p]\n", (void *)0);
//     ret2 = ft_printf("ft_printf : [%p]\n", (void *)0);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST %%%% =====\n");
//     ret1 = printf("printf : [%%]\n");
//     ret2 = ft_printf("ft_printf : [%%]\n");
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     printf("===== TEST COMBOS =====\n");
//     ret1 = printf("printf : char=%c str=%s int=%d hex=%x ptr=%p %%\n", 'Z',
//             "combo", -12345, 4242, &x);
//     ret2 = ft_printf("ft_printf : char=%c str=%s int=%d hex=%x ptr=%p %%\n",
//             'Z', "combo", -12345, 4242, &x);
//     printf("Return : printf=%d | ft_printf=%d\n\n", ret1, ret2);
//     return (0);
// }
