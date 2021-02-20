/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:17:12 by stun-ism          #+#    #+#             */
/*   Updated: 2021/02/20 15:28:44 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (column == x || column == 1 || row == y || row == 1)
			{
				ft_putchar('*');
			} else {
				ft_putchar(' ');
			}
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}

int		main(void)
{
	rush(5, 8);
	return (0);
}
