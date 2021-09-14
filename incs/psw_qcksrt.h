/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw_qcksrt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:03:19 by wetieven          #+#    #+#             */
/*   Updated: 2021/09/14 10:23:20 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSW_QCKSRT_H
# define PSW_QCKSRT_H

# include "psw_algo.h"

void	last_srt_a(t_game *game, size_t low, size_t high);
void	last_srt_b(t_game *game, size_t high, size_t low);
void	qcksrt_b(t_game *game, size_t high, size_t low, t_mode step);
void	qcksrt_a(t_game *game, size_t low, size_t high, t_mode step);
void	qcksrt_init(t_game *game, size_t low, size_t high);

#endif
