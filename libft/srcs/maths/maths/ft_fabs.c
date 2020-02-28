/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:01:06 by lbenard           #+#    #+#             */
/*   Updated: 2019/11/01 16:01:34 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths/maths.h"

float	ft_fabs(float i)
{
	return ((i < 0.0f) ? -i : i);
}