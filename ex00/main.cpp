/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 04:45:45 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/17 05:41:44 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"



int	main()
{
	std::srand(static_cast<unsigned int>(time(0)));
    std::vector<int> vec;

	for (int i = 0; i < 20; i++)
		vec.push_back(i);

	shuffle(vec);

	int i = rand() % 24 + 1;
	try
	{
		std::cout << i << std::endl;
		easyfind(vec, i);
		easyfind(vec, 20000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}