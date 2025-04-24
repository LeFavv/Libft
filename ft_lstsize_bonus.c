#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int result;
    t_list *temp;

    result = 0;
    temp = lst;
    while (temp != NULL)
    {
        temp = temp->next;
        result++;
    }
    return (result);
    
}