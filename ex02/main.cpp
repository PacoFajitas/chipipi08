/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:55:18 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/18 21:54:38 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	MutantStack<int> a;
	std::list<int> b;
	
	a.push(9123);
	a.push(231);
	a.push(12333);
	b.push_back(9123);
	b.push_back(231);
	b.push_back(12333);

	MutantStack<int>::iterator it;
	MutantStack<int>::iterator end;
	std::list<int>::iterator it2;
	std::list<int>::iterator end2;
	it = a.begin();
	it2 = b.begin();
	end = a.end();
	end2 = b.end();
	while(*it2 != *end2)
	{
		std::cout << *it << std::endl;
		std::cout << *it2 << std::endl;
		it2 ++;
		++it;
	}

}