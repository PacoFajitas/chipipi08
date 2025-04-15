/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:03:33 by tfiguero          #+#    #+#             */
/*   Updated: 2025/04/15 17:57:19 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_limit = 0;
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int limit)
{
	_limit = limit;
	std::cout << "Constructor with limit " << _limit << " called" << std::endl;
}
Span::Span(Span& old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Span& Span::operator=(Span& old)
{
	std::cout << "equal operator overload called" << std::endl;
	if (this != &old)
	{
		this->_limit = old._limit;
		// this->_numbers.clear();
		this->_numbers = old._numbers;
		
	}
	return *this;
}

void Span::addNumber(int num)
{
	// std::cout << _limit << std::endl;
	if (_limit > 0)
	{
		_numbers.insert(num);
		_limit--;
	}
	else
	{
		throw std::runtime_error("Limit of numbers surpassed");
	}
	
}

int Span::longestSpan()
{
	if(_numbers.size() == 1 || _numbers.size() == 0)
		throw std::runtime_error("Not enough numbers to do this");
	else
	{
		int min = *std::min_element(_numbers.begin(), _numbers.end());
		int max = *std::max_element(_numbers.begin(), _numbers.end());
		return (max- min);
	}
}

int Span::shortestSpan()
{
	int min;
	int	temp;
	
	if(_numbers.size() == 1 || _numbers.size() == 0)
		throw std::runtime_error("Not enough numbers to do this");
	min = INT_MAX;
	for (size_t i = 1; i < _numbers.size(); i++)
	{
		temp = (*_numbers.begin()+i) - (*_numbers.begin()+i-1);
		if(temp < min)
			min = temp;
	}
	
	return min;
}

void Span::addNumbers(int amount) 
{
	for (int i = 0; i < amount; i++) 
	{
		int temp = rand() % 100;
		addNumber(temp);
	}
}

void Span::printNumbers()
{
	for (std::set<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it) {
        std::cout << *it << " " << std::endl;
    }
	
}
Span::~Span()
{
	std::cout << "Default destructor called" << std::endl;
}