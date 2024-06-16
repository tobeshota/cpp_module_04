/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 08:59:44 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : m_type("AAnimal") {
  std::cout << "(constructor)AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
  *this = other;
  std::cout << "(constructor)AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
  if (this != &other) {
    this->m_type = other.m_type;
  }
  std::cout << "AAnimal Copy assignment operator called" << std::endl;
  return *this;
}

AAnimal::~AAnimal(void) {
  std::cout << "(constructor)AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const { return m_type; }

void AAnimal::makeSound(void) const { std::cout << "(AAnimal sound)" << std::endl; }
