/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:29:42 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/18 20:31:39 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <cstdlib>
# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack& old);
	MutantStack& operator=(const MutantStack& old);
	~MutantStack();
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(void);
	iterator	end(void);
	
};
#include "MutantStack.tpp"


#endif