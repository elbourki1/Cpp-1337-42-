/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:42 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:43 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <vector>
class span
{
private:
    std::vector<int> _tab;
    unsigned int _size;
public:
    span(unsigned int N);
    span();
    span(span const &s);
    virtual ~span();
    span    &operator=(span const &s);
    class StorageLimitexception : public std::exception
    {
        public:
        StorageLimitexception();
        virtual ~StorageLimitexception() throw();
        const char * what() const throw();
    };
    class NotEnoughValues : public std::exception
    {
        public:
        NotEnoughValues();
        virtual ~NotEnoughValues() throw();
        const char * what() const throw();
    };
    void    addNumber(int n);
    int     longestSpan();
    int     shortestSpan();
};
