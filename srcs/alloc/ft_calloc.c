/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:33:28 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:46:28 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*d;

	if (!(ptr = malloc(size * count)))
		return (NULL);
	d = ptr;
	count *= size;
	while (count)
	{
		*d = 0;
		d++;
		count--;
	}
	return (ptr);
}
