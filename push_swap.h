/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:43:52 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:47:30 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

typedef struct  s_list{
	int	value;
	int	position;
} t_list;

void	sa(t_list *a);
void	ss(t_list *a, t_list *b);
int	strlen_list(t_list *list);
t_list	*pb_b(t_list *a, t_list *b);
t_list  *fre_a(t_list *a);
t_list	*pb(t_list *a, t_list *b);
void	ra(t_list *a);
void	rr(t_list *a, t_list *b);
void	rra(t_list *a);
void	rrr(t_list *a, t_list *b);
//push swap visualiseur
//raditz (pas suffisant)

#endif
