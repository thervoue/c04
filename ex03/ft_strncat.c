/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 15:50:08 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 17:23:57 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] && nb > 0)
	{
		dest[a] = src[b];
		b++;
		a++;
		nb--;
	}
	dest[a] = '\0';
	return (dest);
}
