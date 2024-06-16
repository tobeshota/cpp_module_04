/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:56:37 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 21:02:28 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string m_type;

 public:
  Animal(void);
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  virtual ~Animal(void);
  std::string getType(void) const;
  /** 仮想関数 c.f．https://cpp-lang.sevendays-study.com/ex-day6.html
   * virtualがついたメソッドを関数と呼ぶ，
   * メソッドにvirtualをつけると，もし子クラスにオーバーライドされたものがある場合，子クラスに実装されたメンバ関数が実行される．
   * 仮想関数でないメンバ関数がオーバーライドされた場合，親クラスから子クラスのそれを呼び出すことはできない．
   * しかし，virtualをつけ仮想化することで，親クラスから子クラスに実装・オーバーロードされたメンバ関数を呼び出すことができる．つまり，下記に示すことができる．
   *  CParent human = new CChild();  //  親クラスの変数を子クラスで動的に初期化する．
   *  human.overridedfunc();         //  親子ともに定義されたメソッドを用いる．このとき，overridedfunc()が仮想関数の場合，子クラスのoverridedfunc()が呼ばれ，仮想関数でない場合，親クラスのそれが呼ばれる．
   */
  // virtualがついたメソッドは，サブクラスに実装された，メンバ関数が実行されています。
  virtual void makeSound(void) const; //  仮想関数
};

#endif
