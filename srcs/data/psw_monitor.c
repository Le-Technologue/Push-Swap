/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw_monitor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:10:45 by wetieven          #+#    #+#             */
/*   Updated: 2021/08/14 19:55:16 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //TENTION
#include "push_swap.h"

void	psw_monitor(t_game *game, size_t log_start)
{
	size_t	a;
	size_t	b;
	static int		width;
	int		i;

	if (!width)
	{
		width = (int)ft_digit_count(game->set[game->qty - 1]->val, 10);
		if ((int)ft_digit_count(game->set[0]->val, 10) > width)
			width = (int)ft_digit_count(game->set[0]->val, 10);
	}
	a = game->a.load;
	b = game->b.load;
	while (a > b)
		dprintf(1, "%*i | \n", width, game->a.stk[--a].val);
	while (b > a)
	{
		i = 0;
		while (i++ < width)
			dprintf(1, " ");
		dprintf(1, " | %*i\n", width, game->b.stk[--b].val);
	}
	while (a || b)
		dprintf(1, "%*i | %*i\n", width, game->a.stk[--a].val, width, game->b.stk[--b].val);
	dprintf(1, "A");
	i = 1;
	while (i++ < width)
		dprintf(1, "_");
	dprintf(1, "_|_");
	i = 1;
	while (i++ < width)
		dprintf(1, "_");
	dprintf(1, "B\n");
	dprintf(1, "\n%s\n", (char *)(game->log->data + log_start));
}