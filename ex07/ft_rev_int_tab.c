/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 13:20:26 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/11 14:45:42 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int n;
	int temp;

	n = size - 1;
	i = 0;
	while (i < n)
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
		i++;
		n--;
	}
}
