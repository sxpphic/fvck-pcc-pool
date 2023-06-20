/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:41 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/20 12:38:52 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &to_copy);
		Fixed& operator=(const Fixed &to_overload);
		~Fixed();

	private:
	
}

#endif