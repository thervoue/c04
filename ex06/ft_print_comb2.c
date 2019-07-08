/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 22:18:17 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 15:44:38 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = -1;
	while (++nbr1 <= 98)
	{
		nbr2 = nbr1;
		while (++nbr2 <= 99)
		{
			ft_putchar(nbr1 / 10 + '0');
			ft_putchar(nbr1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nbr2 / 10 + '0');
			ft_putchar(nbr2 % 10 + '0');
			if (!(nbr1 == 98 && nbr2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
