/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:13:06 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 12:32:18 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATEREAL_SOURCE_H
# define I_MATERIAL_SOURCE_H
# include "AMateria.hpp"

class IMateriaSource {

	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
}

#endif