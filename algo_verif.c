/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_verif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:00:20 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 09:18:44 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_verif(int size, t_list *a, t_list *b)
{
	if (is_already_sorted(a) == 1)
		return ;
	if (size <= 5)
		small_algo_verif(size, a, b);
	else if (size <= 400)
		algo_big(a, b, 5);
	else if (size <= 1000)
		algo_big(a, b, 11);
	else if (size >= 1000)
		algo_big(a, b, 25);
}

void	small_algo_verif(int size, t_list *a, t_list *b)
{
	if (size == 2)
		two(a);
	if (size == 3)
		three(a);
	if (size == 4)
		four(a, b, 0);
	if (size == 5)
		five(a, b);
}

int	is_already_sorted(t_list *a)
{
	int	i;

	i = 0;
	while (a[i].exist == 1)
	{
		if (a[i].value > a[i + 1].value && a[i + 1].exist == 1)
			return (0);
		i++;
	}
	return (1);
}
