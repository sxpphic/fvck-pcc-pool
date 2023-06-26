/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:41 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/22 09:01:55 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <fstream>

class Fixed {
	
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int 				_fixed_point;
		static const int	_fract_bits = 8;
		
};

#endif