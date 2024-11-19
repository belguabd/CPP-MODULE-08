/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:47:36 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/19 17:27:25 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<int> vec;
    size_t _N;
    static size_t _length;

public:
    Span(unsigned int N);
    void addNumber(unsigned int num);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};