/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:09:56 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:09:56 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

t_list	*ft_lstnew_b(char *content)
{
	t_list	*vagiz;

	vagiz = (t_list *) malloc(sizeof (t_list));
	if (vagiz == NULL)
		return (NULL);
	if (!content)
		vagiz->str = NULL;
	else
		vagiz->str = content;
	vagiz->next = NULL;
	return (vagiz);
}
