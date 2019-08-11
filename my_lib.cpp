/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 00:23:08 by trobicho          #+#    #+#             */
/*   Updated: 2019/08/12 01:14:20 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

std::random_device	trl::m_rd;

auto&	trl::req_mt(void)
{
	return (m_mt);
}

auto&	trl::req_rd(void)
{
	return (m_rd);
}

int		trl::rand_normal_int(int min, int max)
{
	std::uniform_int_distribution<int>		dis(min, max);

	return (dis(m_mt));
}

double	trl::rand_normal_double(double min, double max)
{
	std::uniform_real_distribution<double>	dis(min, max);

	return (dis(m_mt));
}
