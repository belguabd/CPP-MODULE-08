/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:52:35 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/19 17:07:31 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

size_t Span::_length = 0;

Span::Span(unsigned int N) : vec(N), _N(N) {};

void Span::addNumber(unsigned int num)
{
    if (_length >= _N)
        throw std::length_error("The span is full");
    vec.push_back(num);
    _length++;
};

unsigned int Span::shortestSpan()
{
    
    if (_N < 2)
        throw std::length_error("The container must have at least two elements.");
    
    sort(vec.begin(), vec.end());
    unsigned int shortest = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end() - 1; ++it)
    {
        unsigned int diff = static_cast<unsigned int>(*(it + 1) - *it);
        if (diff < shortest)
            shortest = diff;
    }
    return (shortest);
}

unsigned int Span::longestSpan()
{

    if (vec.size() < 2)
        throw std::length_error("The container must have at least two elements.");
    sort(vec.begin(), vec.end());

    unsigned int longest = vec.back() - vec.front();

    return (longest);
}