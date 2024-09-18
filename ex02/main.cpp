/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:55:18 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/18 20:53:57 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> a;
	a.push(9123);
	a.push(231);
	a.push(12333);

	MutantStack<int>::iterator it;
	MutantStack<int>::iterator end;
	
	it = a.begin();
	end = a.end();
	while(*it != *end)
	{
		std::cout << *it << std::endl;
		it ++;
	}

}