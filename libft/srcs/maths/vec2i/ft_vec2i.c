/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:46:12 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/22 14:53:35 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths/vec2i.h"

t_vec2i	ft_vec2i(int x, int y)
{
	t_vec2i	retval;

	retval.x = x;
	retval.y = y;
	return (retval);
}
