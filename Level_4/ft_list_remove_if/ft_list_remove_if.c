#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *prev;
    t_list *tmp;

    if (begin_list == NULL || *begin_list == NULL)
        return;

    curr = *begin_list;
    prev = NULL;

    while (curr != NULL)
    {
        if ((*cmp)(curr->data, data_ref) == 0)
        {
            tmp = curr; 
            
            if (prev == NULL)
                *begin_list = curr->next; 
            else
                prev->next = curr->next; 
        
            curr = curr->next; 
            free(tmp);         
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}