/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:12:16 by mseastar          #+#    #+#             */
/*   Updated: 2021/11/27 13:01:32 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*bog;

	while (*lst)
	{
		bog = (*lst)->next;
		del((*lst)->str);
		free(*lst);
		*lst = bog;
	}
}
