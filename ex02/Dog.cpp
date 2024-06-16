/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 13:58:47 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AbstractAnimal(), m_brain(new Brain()) {
  m_type = "Dog";
  std::cout << "(constructor)Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AbstractAnimal(other),  m_brain(new Brain(*other.m_brain)) {
  *this = other;
  std::cout << "(constructor)Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    AbstractAnimal::operator=(other);
    *m_brain = *other.m_brain;
  }
  std::cout << "Dog Copy assignment operator called" << std::endl;
  return *this;
}

Dog::~Dog(void) {
  delete m_brain;
  std::cout << "(constructor)Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "(Dog sound)Ahwoooooo" << std::endl;
}
