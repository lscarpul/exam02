#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp = 0;
    t_list *start = lst;
    if(!lst)
        return(start);
    while (lst->next != 0)
    {
        if(*cmp(lst->data, lst->next->data) == 0)
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;

            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}