#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == 0 || *begin_list == 0)
        return;

    t_list *prev = NULL;
    t_list *curr = begin_list;
    t_list *tmp;
    if(!data_ref)
        return;
    while(curr != NULL)
    {
        if(cmp(curr->data, data_ref) == 0)
        {
            tmp = curr;
            if(prev == NULL)
                begin_list = curr->next;
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