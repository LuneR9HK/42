/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaemoill <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 01:33:36 by gaemoill          #+#    #+#             */
/*   Updated: 2025/10/29 01:33:36 by gaemoill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_elem = ft_lstnew(tmp);
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
static void	ft_putstr(char *s)
{
	int	i;
	
	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_print_lst(t_list *lst)
{
	while (lst)
	{
		ft_putstr((char *)lst->content);
		lst = lst->next;
	}
}

void	*lst_toupper(t_list *lst)
{
	char	*s;
	char	*new;

	s = (char *)lst->content;
	if (!s)
		return (NULL);
	i = 0;
	while (s)
	{
		if (s >= 'a' && s <= 'Z')
			new[i] = s[i] - 32;
		i++;
	}
	new[i] = '\0';
	return (new);
}
int	main(void)
{	
	t_list	*res;
	t_list *elem1 = ft_lstnew(ft_strdup("hey"));
	t_list *elem2 = ft_lstnew(ft_strdup("yolo"));
	t_list *elem3 = ft_lstnew(ft_strdup("prout"));

	ft_lstadd_back(&elem1, elem2);
	ft_lstadd_back(&elem1, elem3);

	ft_print_lst(elem1);

	// res = ft_lstmap(elem1, (void *)lst_toupper, free);
// 
	// ft_print_lst(res);
// 
	 ft_lstclear(&elem1, free);
	// 
	return (0);
}
