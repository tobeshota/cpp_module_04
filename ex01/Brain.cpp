/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 08:59:44 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)  {
  std::cout << "(constructor)Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
  *this = other;
  std::cout << "(constructor)Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other) {
    for(std::size_t i = 0; i < m_ideas_size; i++)
      this->m_ideas[i] = other.m_ideas[i];
  }
  std::cout << "Brain Copy assignment operator called" << std::endl;
  return *this;
}

Brain::~Brain(void) {
  std::cout << "(constructor)Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int idea_index) const
{
  if (idea_index >= 0 && idea_index <= m_ideas_size - 1)
    return m_ideas[idea_index];
  else
    return NULL;
}

void Brain::setIdea(int idea_index, std::string idea)
{
  if (idea_index >= 0 && idea_index <= m_ideas_size - 1)
    m_ideas[idea_index] = idea;
}
