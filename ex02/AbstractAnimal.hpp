/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:56:37 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:16:31 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACTANIMAL_HPP
#define ABSTRACTANIMAL_HPP

#include <iostream>

class AbstractAnimal {
 protected:
  std::string m_type;

 public:
  AbstractAnimal(void);
  AbstractAnimal(const AbstractAnimal& other);
  AbstractAnimal& operator=(const AbstractAnimal& other);
  virtual ~AbstractAnimal(void);
  std::string getType(void) const;
  /** 純粋仮想関数 c.f．https://cpp-lang.sevendays-study.com/ex-day6.html
   * 後ろに「=0」がついた仮想関数を純粋仮想関数と呼ぶ．
   * 純粋仮想関数とは，メソッドそのものは存在するものの，実装がないクラスである．
   * 実装は，このクラスを継承した子クラスにされることが前提となっている．
   * 純粋仮想関数を1つ以上持つクラスを抽象クラス(Abstract class)という．
   * 抽象クラスには，インスタンスを作ることができないという特徴を持つ．
   */
  virtual void makeSound(void) const = 0; //  純粋仮想関数
};

#endif
