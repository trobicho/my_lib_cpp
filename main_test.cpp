/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 01:38:40 by trobicho          #+#    #+#             */
/*   Updated: 2019/08/12 01:47:04 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"
#include <iostream>

int	main()
{
	for(int i = 0; i < 20; i++)
	{
		std::cout << trl::rand_normal_int(-10, 10) << " ";
	}
	std::cout << std::endl;
	for(int i = 0; i < 20; i++)
	{
		std::cout << trl::rand_normal_double(-1, 1) << " ";
	}
	std::cout << std::endl;
}
