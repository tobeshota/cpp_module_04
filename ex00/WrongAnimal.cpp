/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:23:54 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : m_type("WrongAnimal") {
  std::cout << "(constructor)WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
  std::cout << "(constructor)WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    this->m_type = other.m_type;
  }
  std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "(constructor)WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const { return m_type; }

void WrongAnimal::makeSound(void) const { std::cout << "(WrongAnimal sound)" << std::endl; }
