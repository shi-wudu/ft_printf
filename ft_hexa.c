/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:16:28 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/26 23:23:57 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa(unsigned long long n, char *base)
{
	int				count;
	unsigned long	size;

	count = 0;
	size = ft_strlen(base);
	if (n >= size)
	{
		count += ft_hexa(n / size, base);
		count += ft_putchar(base[n % size]);
	}	
	else
		count += ft_putchar(base[n]);
	return (count);
}
