/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 07:03:38 by tfiguero          #+#    #+#             */
/*   Updated: 2025/04/15 17:21:11 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <cstdlib>
# include <algorithm> 
# include <exception>
# include <climits>

class Span
{
	private:
		unsigned int _limit;
		std::multiset<int> _numbers;
	public:
		Span();
		Span(unsigned int limit);
		Span(Span& old);
		Span& operator=(Span& old);
		~Span();
		void addNumber(int num);
		int longestSpan();
		int shortestSpan();
		void addNumbers(int amount);
		void printNumbers();
};

#endif