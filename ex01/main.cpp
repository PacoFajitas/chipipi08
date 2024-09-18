/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:55:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/17 14:10:47 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span a(500);
	// Span b(500);
	srand(static_cast<unsigned int>(time(0)));
	
	try
	{
		// b.addNumbers(502);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		a.addNumbers(100);
		std::cout << "ESTOOOOOOOOS SOOOOON LOOOOOOS NUMEROOOOOOOOOOOOOs" << std::endl;
		a.printNumbers();
		std::cout << "SHORTY" << std::endl;
		std::cout << a.shortestSpan() << std::endl;
		std::cout << "LONGY" << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}