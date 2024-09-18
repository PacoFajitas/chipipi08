/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 04:30:52 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/17 07:06:51 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <algorithm> 
# include <exception>

template <typename T>
typename T::value_type easyfind(T contain, int look)
{
	for (size_t i = 0; i < contain.size(); i++)
	{
		if (contain[i] == look)
		{
			return(contain[i]);
		}
		
	}
	throw std::runtime_error("Number wasn't found");
};

template <typename T>
void shuffle(std::vector<T>& vec)
{
    for (std::size_t i = vec.size() - 1; i > 0; --i)
	{
        std::size_t j = rand() % (i + 1);
        std::swap(vec[i], vec[j]);
    }
}

#endif