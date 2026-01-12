/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:41:28 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*typedef struct  s_list{
        int     value;
        int     position;
} t_list;*/

void	sa(t_list *a)
{
	int	swap;

	swap = a[0].value;
	a[0].value = a[1].value;
	a[1].value = swap;
}

void	ss(t_list *a, t_list *b) 
{
	sa(a);
	sa(b);
}

t_list	*pb(t_list *a, t_list *b)
{
	b = pb_b(a, b);
	a = fre_a(a);
	return (a);
}

int	main(int argc, char *argv[])
{
	int	i;
	t_list	*list1;
//	t_list	*list2;

	list1 = malloc(sizeof(t_list) * argc - 1);
	if (!list1)
		return (-1);
	i = 1;
	while (i < argc)
	{
		list1[i - 1].value = atoi(argv[i]);//attention atoi
		list1[i - 1].position = i;
		i++;
	}
/*	list2 = malloc(sizeof(t_list) * 4);
	if (!list2)
		return (-1);
	list2[0].value = 0;
	list2[0].position = 1;
	list2[1].value = 8;
	list2[1].position = 2;
	list2[2].value = 5;
	list2[2].position = 3;
	list1 = pb(list1, list2);*/
	i = 0;
	rra(list1);
//	sa(list1);
	while (list1[i].position)
	{
		printf("value1 = %i, position1 = %i\n", list1[i].value, list1[i].position);
		i++;
	}
	i = 0;
/*	printf("\n");
	while (list2[i].position)
	{
		printf("value2 = %i, position2 = %i\n", list2[i].value, list2[i].position);
		i++;
	}*/
	free(list1);
//	free(list2);
	return (0);
}
