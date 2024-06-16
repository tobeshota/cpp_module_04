/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 08:59:44 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal(void) : m_type("AbstractAnimal") {
  std::cout << "(constructor)AbstractAnimal Default constructor called" << std::endl;
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal& other) {
  *this = other;
  std::cout << "(constructor)AbstractAnimal copy constructor called" << std::endl;
}

AbstractAnimal& AbstractAnimal::operator=(const AbstractAnimal& other) {
  if (this != &other) {
    this->m_type = other.m_type;
  }
  std::cout << "AbstractAnimal Copy assignment operator called" << std::endl;
  return *this;
}

AbstractAnimal::~AbstractAnimal(void) {
  std::cout << "(constructor)AbstractAnimal destructor called" << std::endl;
}

std::string AbstractAnimal::getType(void) const { return m_type; }

void AbstractAnimal::makeSound(void) const { std::cout << "(AbstractAnimal sound)" << std::endl; }
