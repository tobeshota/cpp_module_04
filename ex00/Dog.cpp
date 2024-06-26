/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:25:23 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
  m_type = "Dog";
  std::cout << "(constructor)Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  *this = other;
  std::cout << "(constructor)Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << "Dog Copy assignment operator called" << std::endl;
  return *this;
}

Dog::~Dog(void) {
  std::cout << "(constructor)Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "(Dog sound)Ahwoooooo" << std::endl;
}
