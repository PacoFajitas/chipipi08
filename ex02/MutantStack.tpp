/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:36:42 by tfiguero          #+#    #+#             */
/*   Updated: 2025/04/15 18:54:18 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template < typename T >
MutantStack< T >::MutantStack( void ): std::stack< T >()
{
	std::cout << "Default MutantStack constructor called" << std::endl;
};

template < typename T >
MutantStack< T >::MutantStack( const MutantStack& old ): std::stack< T >( old )
{
	std::cout << "Copy MutantStack constructor called" << std::endl;
	this = &old;	
};


template < typename T >
MutantStack< T >&	MutantStack< T >::operator=( const MutantStack& old )
{
	std::cout << "Equal operator overload called" << std::endl;
	if(this != &old)
	{
		std::stack<T>::operator=(old);
	}
	return *this;
};

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Default destructor called" << std::endl;
};

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{

	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
};

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{

	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return this->c.rend();
};
template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin(void) const
{

	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend(void) const
{
	return this->c.end();
};

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin(void) const
{

	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend(void) const
{
	return this->c.rend();
};