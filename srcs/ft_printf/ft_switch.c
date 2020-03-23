/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:59:38 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/12 15:34:20 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_switch(t_op *op, va_list ap)
{
	if (op->converter == 's')
	{
		ft_4_alpha(op, ap);
	}
	else if (op->converter == 'c' || op->converter == '%')
		ft_4_c(op, ap);
	if (op->converter == 'd' || op->converter == 'i')
		ft_4_di(op, ap);
	else if (op->converter == 'p')
		ft_4_p(op, ap);
	else if (op->converter == 'x' || op->converter == 'X')
		ft_4_x(op, ap);
	else if (op->converter == 'u')
		ft_4_u(op, ap);
}
