/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:34:03 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 15:52:33 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL && n != 0)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (d + 1);
		s++;
		d++;
		n--;
	}
	return (0);
}
