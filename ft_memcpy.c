/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:30:23 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 15:49:04 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (src == NULL && dst == NULL && n != 0)
		return (NULL);
	d = dst;
	s = src;
	while (n)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}
