/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:18:45 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 11:13:03 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// static void put_line(void)
// {
//   static int index;
//   std::cout << "- " << index++ << " ────────────────────" << std::endl;
// }


int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  j->makeSound();
  i->makeSound();

  delete j; //  should not create a leak
  delete i;

  // Animal array;
  Animal* animals[10];
  for (int k = 0; k < 5; ++k) {
    animals[k] = new Dog();
    animals[k + 5] = new Cat();
  }

  for (int k = 0; k < 10; ++k) {
    animals[k]->makeSound();
    delete animals[k];
  }

  return 0;
}

#ifdef DEBUG

__attribute__((destructor)) static void destructor() {
  system("leaks -q a.out");
}

#endif
