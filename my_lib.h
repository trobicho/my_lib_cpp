/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 00:23:09 by trobicho          #+#    #+#             */
/*   Updated: 2019/08/12 01:13:56 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <random>

class	trl
{
	public:
		//static void	set_mt(mt &mt); for setting a define seed when needed;
		static auto&	req_mt(void);
		static auto&	req_rd(void);
		static int		rand_normal_int(int min, int max);
		static double	rand_normal_double(double min, double max);

	private:
		static std::random_device	m_rd;
		static std::mt19937			m_mt;
};
