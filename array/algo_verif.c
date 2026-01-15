/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_verif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:00:20 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/15 12:02:03 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_verif(int size, t_list *listA, t_list *listB)
{
	if (size <= 5)
		small_algo_verif(size, listA, listB);
	else
		algo_big(listA, listB);
}

void	small_algo_verif(int size, t_list *listA, t_list *listB)
{
	if (size == 2)
		two(listA);
	if (size == 3)
		three(listA);
	if (size == 4)
		four(listA, listB, 0);
	if (size == 5)
		// marche pas tjr tres bien (peut etre utiliser plus gros algo);
		five(listA, listB);
}
