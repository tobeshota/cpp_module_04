/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 11:01:55 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), m_brain(new Brain()) {
  m_type = "Cat";
  std::cout << "(constructor)Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), m_brain(new Brain(*other.m_brain)) {
  *this = other;
  std::cout << "(constructor)Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
    *m_brain = *other.m_brain;
  }
  std::cout << "Cat Copy assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat(void) {
  delete m_brain;
  std::cout << "(constructor)Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "(Cat sound)meowwwww" << std::endl;
}