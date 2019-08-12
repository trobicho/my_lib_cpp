/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 00:23:08 by trobicho          #+#    #+#             */
/*   Updated: 2019/08/12 02:39:06 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"
#define		SIGMA(n) (((n+1)/2.0)*n)

std::random_device	trl::m_rd;
std::mt19937		trl::m_mt(m_rd());

auto&	trl::req_mt_ref(void)
{
	return (m_mt);
}

auto&	trl::req_rd_ref(void)
{
	return (m_rd);
}

int		trl::rand_uniform_int(int min, int max)
{
	std::uniform_int_distribution<int>		dis(min, max);

	return (dis(m_mt));
}

double	trl::rand_uniform_double(double min, double max)
{
	std::uniform_real_distribution<double>	dis(min, max);

	return (dis(m_mt));
}

int		trl::wheel_sigma(int limit) //Whoa this is bad!!!
{
    return (limit - wheel_sigma(limit));
}

int		trl::wheel_sigma_rank(int limit) //Whoa this is bad!!!
{
    int	result;
	int	i;
	int	min = 0;
	int	max = limit;
	int	n = rand_uniform_int(1, SIGMA(limit));

    if(n>SIGMA(limit / 2))
        min = limit / 2;
    else
        max = limit / 2;
    for (i = min; i < max; i++)
    {
        if(n > SIGMA(i))
            min = i;
        else
            max = i;
    }
    if (i == SIGMA(min))
        result = min;
    else
        result = max;
    return (limit - result);
}
