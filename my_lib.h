/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 00:23:09 by trobicho          #+#    #+#             */
/*   Updated: 2019/10/30 11:26:11 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <random>

using namespace std;

class	trl
{
	public:
		//static void	set_mt(mt &mt); for setting a define seed when needed;
		static random_device&	req_rd_ref(void);
		static mt19937&			req_mt_ref(void);
		static int				rand_uniform_int(int min, int max);
		static double			rand_uniform_double(double min, double max);
		static int				wheel_sigma(int n);
		static int				wheel_sigma_rank(int n);
		static double			sigmoid(double x, double k = 1.0);
		static double			logistic_steep(double x);

	private:
		static random_device	m_rd;
		static mt19937			m_mt;
};
