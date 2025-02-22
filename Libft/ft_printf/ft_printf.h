/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkerkeni <mkerkeni@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:13:47 by mkerkeni          #+#    #+#             */
/*   Updated: 2024/10/12 21:47:21 by mkerkeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft.h"

int		ft_printf(const char *s, ...);
void	ft_putnbr_unsigned_int(unsigned int nb);
int		print_str(char *str, int count);
int		print_nbr(int nb, int count);
void	ft_putnbr_hexa(unsigned long long nb, char *hexa);
int		print_hexa_low(unsigned long long nb, int count);
int		print_hexa_up(unsigned long long nb, int count);

#endif
