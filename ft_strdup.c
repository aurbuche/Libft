/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:47:51 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 13:27:54 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dst;

	if (!(dst = malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	return (ft_strcpy(dst, s1));
}
