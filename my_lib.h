/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 00:23:09 by trobicho          #+#    #+#             */
/*   Updated: 2019/08/12 02:39:44 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <random>

class	trl
{
	public:
		//static void	set_mt(mt &mt); for setting a define seed when needed;
		static auto&	req_mt_ref(void);
		static auto&	req_rd_ref(void);
		static int		rand_uniform_int(int min, int max);
		static double	rand_uniform_double(double min, double max);
		static int		wheel_sigma(int n);
		static int		wheel_sigma_rank(int n);

	private:
		static std::random_device	m_rd;
		static std::mt19937			m_mt;
};
