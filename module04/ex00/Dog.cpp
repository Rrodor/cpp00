/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrodor <rrodor@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:43:04 by rrodor            #+#    #+#             */
/*   Updated: 2023/08/02 16:53:05 by rrodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "ouaf" << std::endl;
}
