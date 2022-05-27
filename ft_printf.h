/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:30:00 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/27 12:04:58 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_hexa(unsigned long long n, char *base);

int	ft_putpos(unsigned int n);

int	ft_strlen(char *s);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_putnbr(int n);

int	ft_printf(const char *str, ...);

#endif