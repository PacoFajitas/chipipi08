/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:55:18 by tfiguero          #+#    #+#             */
/*   Updated: 2025/04/15 19:02:31 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	MutantStack<int> a;
	MutantStack<int> c;
	std::list<int> b;
	
	c.push(9123);
	c.push(231);
	c.push(12333);
	b.push_back(9123);
	b.push_back(231);
	b.push_back(12333);
	a = c;
	MutantStack<int>::iterator it;
	MutantStack<int>::iterator end;
	std::list<int>::iterator it2;
	std::list<int>::iterator end2;
	it = a.begin();
	it2 = b.begin();
	end = a.end();
	end2 = b.end();
	while(*it != *end)
	{
		std::cout << *it << std::endl;
		std::cout << *it2 << std::endl;
		it2 ++;
		++it;
	}
	
	int temp1;
	temp1 = *(it-1);
	*(it-1) = 2;
	std::cout << "Changed last value of it to :" <<*(it-1) << std::endl;
	*(it-1) = temp1;
	std::cout << "Changed last value of it back to :" <<*(it-1) << std::endl;
	std::cout << "Now let's make it constant!" << std::endl;
	
	MutantStack<int>::const_iterator cit;
	MutantStack<int>::const_iterator cend;
	cit = a.cbegin();
	cend = a.cend();
	while(*cit != *cend)
	{	
		std::cout << *cit << std::endl;
		++cit;
	}
	
	std::cout << "Now let's reverse it!" << std::endl;
	MutantStack<int>::reverse_iterator rit;
	MutantStack<int>::reverse_iterator rend;
	std::list<int>::reverse_iterator rit2;
	std::list<int>::reverse_iterator rend2;
	rit = a.rbegin();
	rend = a.rend();
	rit2 = b.rbegin();
	rend2 = b.rend();
	while(*rit != *rend)
	{
		std::cout << *rit << std::endl;
		std::cout << *rit2 << std::endl;
		rit2 ++;
		++rit;
	}
	int temp;
	temp = *(rit-1);
	*(rit-1) = 2;
	std::cout << "Changed last value of rit to :" <<*(rit-1) << std::endl;
	*(rit-1) = temp;
	std::cout << "Changed last value of rit back to :" <<*(rit-1) << std::endl;
	std::cout << "Now let's make it constant(again)!" << std::endl;
	MutantStack<int>::const_reverse_iterator crit;
	MutantStack<int>::const_reverse_iterator crend;
	crit = a.crbegin();
	crend = a.crend();
	while(*crit != *crend)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
}