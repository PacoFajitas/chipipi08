/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:55:29 by tfiguero          #+#    #+#             */
/*   Updated: 2025/04/15 17:27:14 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span a1(10000);
	Span a2(500);
	Span b1(10000);
	Span b2(500);
	srand(static_cast<unsigned int>(time(0)));
	
	try
	{
		// a1.addNumbers(10000);
		b2.addNumbers(502);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<'\n';
	}
	// b1=a1;
	// b1.printNumbers();
	try
	{
		a2.addNumbers(100);
		std::cout << "Estos son los numeros:" << std::endl;
		a2.printNumbers();
		std::cout << "Shorty" << std::endl;
		std::cout << a2.shortestSpan() << std::endl;
		std::cout << "Longy" << std::endl;
		std::cout << a2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}