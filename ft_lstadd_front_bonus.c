#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *newNode = ft_lstnew(new);
    newNode->next = *lst;
    *lst = newNode;
}