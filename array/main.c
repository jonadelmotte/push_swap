/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 09:33:19 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/13 09:33:46 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list  *init_list(int size, char *data[])
{
    int i;
    t_list  *list;

    i = 1;
    list = malloc(sizeof(t_list) * (size - 1));
    if (!list)
        return (NULL);
    while (i < size)
    {
        list[i - 1].value = ft_atoi(data[i]);
        list[i - 1].position = i;
        i++;
    }
    return (list);
}

static t_list   *init_B()
{
    t_list  *list;
    
    list = malloc(sizeof(t_list));
    if (!list)
        return (NULL);
    list[0].position = 0;
    list[0].value = 0;
    return(list);
}

int	main(int argc, char *argv[])
{
    t_list  *listA;
    t_list  *listB;
    int size;
    int i;
    i = 0;

    listB = init_B();
    listA = init_list(argc, argv);
    size = strlen_list(listA);
    algo_verif(size, listA, listB);
    /*while(listA[i].position)
	{
		printf("value1 = %i, position1 = %i\n", listA[i].value, listA[i].position);
		i++;
	}
    i = 0;
    printf("\n");
    while(listB[i].position)
	{
		printf("value2 = %i, position2 = %i\n", listB[i].value, listB[i].position);
		i++;
	}*/
    return (0);
}
