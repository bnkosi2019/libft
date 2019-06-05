/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:23:33 by bnkosi            #+#    #+#             */
/*   Updated: 2019/06/05 13:12:33 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char const  *str)
{
	int i;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
char	ft_getchar(void)
{
	char c;

	read(0, &c, 1);
	return (c);
}
int main ()
{
	char c;
	int i;
	char *str;
	
	i = 0;
	while (c != '\0')
	{
		c = ft_getchar();
		if (c >= '0' && c <= '9')
		{
			ft_putchar(c);
			i++;
		}
	}
	return 0;
}
