/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 15:48:07 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 17:10:02 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(dst);
	i = 0;
	if (len > size)
		return (ft_strlen(src) + size);
	while (src[i] && size - len > 1)
	{
		dst[len + i] = src[i];
		size--;
		i++;
	}
	dst[len + i] = '\0';
	return (ft_strlen(src) + len);
}
