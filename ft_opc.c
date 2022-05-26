/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:31:09 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/26 23:00:43 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(void *s)
{
	int	len;

	len = 0;
	while (s)
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	return (len);
}

void	ft_putnbr(int n)
{
	int	len;

	len = ft_strlen(n);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
	}
	return (len);
}

void	ft_putpos(unsigned int n, int fd)
{
	int	len;

	len = ft_strlen(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (len);
}