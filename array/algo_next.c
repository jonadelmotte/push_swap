/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:55:51 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/15 13:28:44 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    algo_big(t_list *a, t_list *b)
{
    int divided;
    int begin;
    int end;
    int size;
    int i;

    i = 1;
    size = strlen_list(a);
    divided = (size / 5) + (size % 5);
    begin = 1;
    end = divided;
    while (begin < size + 1)
    {
        while (exist(a, begin, end) == 1)
        {
            smart_rotate(a, find_sorted(a, begin, end));
            sort_B(a, b, a[0].value);
        }
        push_back(a, b);
        end += divided - (size % 5);
        begin += divided - (size % 5);
    }
    printf("begin = %i\n", begin);
}

void    sort_B(t_list *a, t_list *b, int pushed)
{
    int i;

    i = 0;
    //while (b[i].value != find_next_biggest(b, pushed))
    //    rb(b);
    smart_rotate_B(b, find_next_biggest(b, pushed));
    pb(a, b);
}

void    push_back(t_list *a, t_list *b)
{
    smart_rotate_B(b, find_biggest(b));
    smart_rotate(a, find_next_biggest(a, find_smaller(b)));
    while (b[0].position)
    {
        pa(a, b);
    }
}

/*int find_smart(t_list *a, int size)
{
    int i;

    i = 0;
    while (a[i].size !=)
}*/

/*void    divide(t_list *a, t_list *b)
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
}*/
