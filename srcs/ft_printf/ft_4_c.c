/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:00:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/12 15:21:05 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		ft_stock_c(t_op *op, va_list ap)
{
	char	c;

	if (op->converter == 'c')
		c = va_arg(ap, int);
	else
		c = '%';
	op->converter = 'c';
	if (c == '\0')
		op->buffer = ft_strdup("");
	else
		op->buffer = ft_ctos(c);
	return (c);
}

void		ft_4_c(t_op *op, va_list ap)
{
	if (op->zero && op->is_a_negative_width)
	{
		op->zero = 0;
		op->width = -op->width;
	}
	ft_stock_c(op, ap);
	if (op->buffer[0] == '\0' && (op->preci == -1 && op->width == -1))
		op->rprint = ft_strdup("\0");
	else if (op->preci != -1 && op->width == -1)
		op->rprint = ft_strdup(op->buffer);
	else if (op->width != -1)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
