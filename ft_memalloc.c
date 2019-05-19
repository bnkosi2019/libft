/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnkosi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:16:40 by bnkosi            #+#    #+#             */
/*   Updated: 2019/05/19 11:25:08 by bnkosi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_memalloc(size_t size)
{
	void *i;

	i = malloc(size);

	if (i == NULL)
		return (null);
	ft_bzero(i, size);
	return (i);
}
