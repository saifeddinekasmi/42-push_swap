/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:56:38 by skasmi            #+#    #+#             */
/*   Updated: 2022/05/24 22:31:53 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_table *m, t_int var)
{
	rra(m, var, 0);
	rrb(m, var, 0);
	ft_printf("rrr\n");
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}