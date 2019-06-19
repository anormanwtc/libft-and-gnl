/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:17:14 by anorman           #+#    #+#             */
/*   Updated: 2019/06/19 13:42:59 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_vprintf(const char **format, va_list *ap)
{
	va_list cp;
	int		charsum;
	char	c;
	char	*str;

	(*format)++;
	if (**format == 's')
	{
		str = va_arg(*ap, char *);
		ft_putstr(str);
		(*format)++;
	}
	charsum = ft_strlen(str);
	return (charsum);
}

int		st_format(char c)
{
	char	*str;

	str = ft_strdup("diouxXDOU");
	while (*str)
	{
		if (*str == c)
			return (1);
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	int		charsum;
	va_list	ap;

	va_start(ap, format);
	charsum = 0;
	while (*format)
	{
		if (*format == '%' && format[1] != '%')
			charsum += ft_vprintf(&format, &ap); //manages %s so far
		if (*format == '%' && format[1] == '%') // manages %%
			format++;
		if (*format)
		{
			write(1, format, 1);
			charsum++;
			format++;
		}
	}
	va_end(ap);
	return (charsum);
}

#include <stdio.h>

int		main(void)
{
	ft_printf("Hello %% %s\n", "world");
	return (0);
}
