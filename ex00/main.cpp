/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:30:36 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/19 11:12:49 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

#include <vector>

int main()
{
    try
    {
        std::vector<int> arr;

        arr.push_back(12);
        arr.push_back(11);
        arr.push_back(13);

        std::vector<int>::iterator it = easyfind(arr, 12);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}