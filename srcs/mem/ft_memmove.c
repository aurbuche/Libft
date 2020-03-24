/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:15:24 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:47:18 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*tmp;

	if (src == NULL && dst == NULL && len != 0)
		return (0);
	d = dst;
	s = src;
	tmp = NULL;
	if (src < dst)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
