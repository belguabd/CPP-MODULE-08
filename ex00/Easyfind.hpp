/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:13:39 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/19 11:13:17 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

typename T::iterator easyfind(T &arge, int to_find)
{
    typename T::iterator it;
    for (it = arge.begin(); it != arge.end(); ++it)
    {
        if (*it == to_find)
            return it;
    }
    throw std::runtime_error("Element not found");
}