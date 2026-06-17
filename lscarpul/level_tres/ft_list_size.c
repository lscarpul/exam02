#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
    int len = 0;
    if(!begin_list)
        return(0);
    while(begin_list[len] != '\0')
    {
        len++;
        begin_list = begin_list->next;
        
    }
    return(len);
}