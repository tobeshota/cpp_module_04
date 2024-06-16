/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:18:45 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 09:02:19 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << " ────────────────────" << std::endl;
}


int main() {
  const Animal* meta = new Animal();                  //  ①(constructor)Animal Default constructor called
  const Animal* j = new Dog();                        //  ②(constructor)Animal Default constructor called ③(constructor)Dog Default constructor called
  const Animal* i = new Cat();                        //  ④(constructor)Animal Default constructor called ⑤(constructor)Cat Default constructor called
  const WrongAnimal* k = new WrongCat();              //  ⑥(constructor)WrongAnimal Default constructor called ⑦(constructor)WrongCat Default constructor called

  put_line();
  std::cout << j->getType() << " " << std::endl;      //  ⑧Dog
  std::cout << i->getType() << " " << std::endl;      //  ⑨Cat
  std::cout << k->getType() << " " << std::endl;      //  ⑩WrongCat

  put_line();
  i->makeSound();                                     //  ⑪(Cat sound)meowwwww
  j->makeSound();                                     //  ⑫(Dog sound)Ahwoooooo
  k->makeSound();                                     //  ⑬(WrongAnimal sound)
  meta->makeSound();                                  //  ⑭(Animal sound)

  put_line();
  delete meta;                                        //  ⑮(constructor)Animal destructor called
  delete k;                                           //  ⑯(constructor)WrongCat destructor called ⑰(constructor)WrongAnimal destructor called
  delete j;                                           //  ⑱(constructor)Dog destructor called ⑲(constructor)Animal destructor called
  delete i;                                           //  ⑳(constructor)Cat destructor called ㉑(constructor)Animal destructor called

  put_line();
  return 0;
}

#ifdef DEBUG

__attribute__((destructor)) static void destructor() {
  system("leaks -q a.out");
}

#endif
