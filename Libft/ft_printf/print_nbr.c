/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkerkeni <mkerkeni@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:33:28 by mkerkeni          #+#    #+#             */
/*   Updated: 2024/10/11 21:09:30 by mkerkeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nb, int count)
{
	ft_putnbr_fd(nb, 1);
	if (nb == -2147483648)
		count += 9;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}	
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	count++;
	return (count);
}
