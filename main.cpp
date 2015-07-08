/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwanlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 20:38:09 by bwanlin           #+#    #+#             */
/*   Updated: 2015/06/20 23:39:23 by bwanlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Game.hpp>

int		main( void ) {
	Game	game;

	game.setFPS(60);
	game.start();
	game.stop();
	std::cout << "You lost !" << std::endl;
}
