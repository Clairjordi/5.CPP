/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:39:42 by clorcery          #+#    #+#             */
/*   Updated: 2023/03/14 15:15:47 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <exception>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
	public : 
		MutantStack();
		MutantStack(const MutantStack & toCopy);
		MutantStack & operator=(const MutantStack & toCopy);
		~MutantStack();

		typedef typename MutantStack<T>::stack::container_type::iterator iterator; 
		iterator begin();
		iterator end();

};

/*Constructor and destructor*/
template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & toCopy)
{
	*this = toCopy;
}


template <typename T>
MutantStack<T>::~MutantStack()
{
}

/*Operator*/
template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & toCopy)
{
	(void) toCopy;
	return *this;
}

/*Member fonction*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}
#endif
