#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *temp;

    temp = lst;
    if (lst == NULL)
        return (NULL);
    while (temp->next != NULL)
        temp = temp->next;
    return (temp);
}