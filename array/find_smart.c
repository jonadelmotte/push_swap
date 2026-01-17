/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smart.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:16:40 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/17 13:34:26 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_up(t_list *a, int begin, int end)
{
	int	i;
	int	found_up;

	i = 0;
	while (a[i].exist == 1)
	{
		if (a[i].size >= begin && a[i].size <= end)
		{
			found_up = a[i].value;
			return (found_up);
		}
		i++;
	}
    write (1, "Nothing up\n", 11);
	exit (1) ;
}

static int	find_down(t_list *a, int begin, int end)
{
	int	size;
	int	found_down;

	size = strlen_list(a) - 1;
	while (size >= 0)
	{
		if (a[size].size >= begin && a[size].size <= end)
		{
			found_down = a[size].value;
			return (found_down) ;
		}
		size--;
	}
	write (1, "Nothing down\n", 13);
    exit (1);
}

int	find_sorted(t_list *a, int begin, int end)
{
	int found_up;
	int found_down;

	found_up = find_up(a, begin, end);
	found_down = find_down(a, begin, end);
	if ((a[0].position - (strlen_list(a) / 2)) + (a[strlen_list(a)].position
			- (strlen_list(a) / 2)) <= 0)
		return (found_up);
	return (found_down);
}

int    exist(t_list *a, int begin, int end)
{
    int i;

    i = 0;
    while (a[i].position)
    {
        if (a[i].size >= begin && a[i].size <= end)
            return (1);
        i++;
    }
    return (0);
}