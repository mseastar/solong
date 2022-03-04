/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:09:59 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:09:59 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_lstclear_b(t_list **lst, void (*del)(void *))
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
