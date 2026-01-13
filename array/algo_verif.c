#include "push_swap.h"

void    algo_verif(int size, t_list *listA, t_list *listB)
{
    if (size <= 5)
        small_algo_verif(size, listA, listB);
}

void    small_algo_verif(int size, t_list *listA, t_list *listB)
{
    if (size == 2)
        two(listA);
    if (size == 3)
        three(listA);
    if (size == 4)
        four(listA, listB, 0);
    if (size == 5)
        five(listA, listB);
}