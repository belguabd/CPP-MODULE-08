/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:40:18 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/20 14:43:39 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>

template <typename T>

class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){return std::stack<T>::c.begin();} 
    iterator end() { return std::stack<T>::c.end() ;}
    
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    const_iterator begin() const{return std::stack<T>::c.begin();} 
    const_iterator end() const{ return std::stack<T>::c.end() ;}
};