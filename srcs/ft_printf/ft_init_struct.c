/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:23:00 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/06 14:43:14 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_op		*ft_init_struct(void)
{
	t_op	*option;

	if (!(option = (t_op *)malloc(sizeof(t_op))))
		return (NULL);
	ft_bzero(option, sizeof(t_op));
	option->percent = 1;
	return (option);
}
