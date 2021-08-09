/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:46:30 by wetieven          #+#    #+#             */
/*   Updated: 2021/08/09 14:21:15 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "psw_inst.h"

// swap top of stack a
void	sa(t_game *game)
{
	if (game->a.top > 0)
		ft_swap(&game->a.stk[game->a.top], &game->a.stk[game->a.top - 1]);
}

// swap top of stack b
void	sb(t_game *game)
{
	if (game->b.top > 0)
		ft_swap(&game->b.stk[game->b.top], &game->b.stk[game->b.top - 1]);
}

// swap both stacks tops
void	ss(t_game *game)
{
	sa(game);
	sb(game);
}
