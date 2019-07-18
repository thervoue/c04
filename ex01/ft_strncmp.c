/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thervoue <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 14:42:54 by thervoue     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 13:37:39 by thervoue    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int    i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char s1[] = "abnc";
	char s2[] = "AbNc";
	printf("%d\n", ft_strncmp(s1, s2, 3));
}
