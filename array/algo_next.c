/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:55:51 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 19:14:02 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_smart(t_list *a, int begin, int end)
{
    int i;
    int found_up;
    int found_down;
    int size;

    size = strlen_list(a) - 1;
    i = 0;
    while(a[i].position)
    {
        if (a[i].value >= begin && a[i].value <= end)
        {
            found_up = a[i].value;
            printf("found_up = %i\n", found_up);
            break;
        }
        i++;
    }
    while(size > 0)
    {
        if (a[size].value >= begin && a[size].value <= end)
        {
            found_down = a[size].value;
            printf("found_down = %i\n", found_down);
            break;
        }
        size--;
    }
    if ((a[i].position - (strlen_list(a) / 2)) + (a[size].position - (strlen_list(a) / 2)) <= 0)
        return (found_up);
    return (found_down);
}

void    divide(t_list *a, t_list *b)
{
    int begin;
    int end;
    int i;
    int diviser;

    i = 0;
    begin = 0;
    diviser = find_biggest(a) / 5;
    end = diviser;
    while (end <= find_biggest(a))
    {
        while (a[i].position)
        {
            if (a[i].value >= begin && a[i].value <= end)
            {
                printf("%i, begin = %i, end = %i\n\n", find_smart(a, begin, end), begin, end);// ic printf
                smart_rotate(a, find_smart(a, begin, end));
                pb(a, b);
                i = 0;
            }
            i++;
        }
        begin += diviser;
        end += diviser;
        i = 0;
    }
}
