/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4_ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <stun-ism@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:47:28 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/02 14:05:19 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		c = '-';
		ft_putchar(c);
		nb *= -1;
	}
	if (nb)
	{
		ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		ft_putchar(c);
	}
	else
		return ;
}
