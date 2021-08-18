/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:43:12 by wetieven          #+#    #+#             */
/*   Updated: 2021/08/18 16:43:14 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft.h"

# define STK_A game->a.stk
# define LOAD_A game->a.load
# define TOP_A (game->a.load - 1)
# define STK_B game->b.stk
# define LOAD_B game->b.load
# define TOP_B (game->b.load - 1)

typedef enum e_fid {
	MAIN_START,
	PSW_PARSING,
	PSW_GAME,
	MAIN_END
}	t_fid;

typedef struct s_val {
	size_t	key;
	int		val;
//	size_t	qutl;
}	t_val;


typedef struct s_stk {
	t_val	*stk;
	size_t	load;
}	t_stk;

typedef struct s_game {
	t_val		**set;
	size_t		qty;
	t_stk		a;
	t_stk		b;
	int			prv_mov;
	t_vctr		*pvt;
	t_vctr		*log;
	size_t		prv_log;
	_Bool		mon;
}	t_game;

#endif
