/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:56:37 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:16:31 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain {
 private:
  static const int m_ideas_size = 100;
  std::string m_ideas[m_ideas_size];

 public:
  Brain(void);
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);
  virtual ~Brain(void);
  std::string getIdea(int idea_index) const;
  void setIdea(int idea_index, std::string idea);
};

#endif
