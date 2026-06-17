#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *start;

    if (!begin_list || !f)
        return;

    start = begin_list;
    while (start != 0)
    {
        (*f)(start->data);
        start = start->next;
    }
}
