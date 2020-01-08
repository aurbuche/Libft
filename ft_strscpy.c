/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strscpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 13:12:54 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 10:07:50 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strscpy(char *dest, const char *src, size_t s, size_t e)
{
	int i;

	i = 0;
	while (s <= e)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
