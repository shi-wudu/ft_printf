/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:31:09 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/27 12:27:29 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (ft_putstr("(null)"));
	return (write (1, s, len));
}

int	ft_putnbr(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
		{
			len += ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
	}
	return (len);
}

int	ft_putpos(unsigned int n)
{
	int	len;

	len = 1;
	if (n > 9)
	{
		len += ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (len);
}
