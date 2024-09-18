/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:36:42 by tfiguero          #+#    #+#             */
/*   Updated: 2024/09/18 20:50:47 by tfiguero         ###   ########.fr       */
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
	
};


template < typename T >
MutantStack< T >&	MutantStack< T >::operator=( const MutantStack& old )
{
	return ( std::stack< T >::operator=( old ) );
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