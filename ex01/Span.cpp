/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:03:33 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/17 14:12:05 by tfiguero         ###   ########.fr       */
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
	this->_limit = old._limit;
	this->_numbers = old._numbers;
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
		int min = *_numbers.begin();
		int max = *--_numbers.end();
		std::cout << min << "    JISJISJISJISJISJISJI    " << max << std::endl;
		return (max- min);
	}
}

int Span::shortestSpan()
{
	int min;
	int	temp;
	
	if(_numbers.size() == 1 | _numbers.size() == 0)
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
	std::cout << "HOLIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << std::endl;
	for (int i = 0; i < amount; i++) 
	{
		int temp = rand() % 100;
		std::cout << temp << std::endl;
		addNumber(temp);
	}
	std::cout << "ADEEEEEEEEEEEEEEEEEEEEEEUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
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