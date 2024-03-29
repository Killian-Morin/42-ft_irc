/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Invite.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorin <kmorin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:29:51 by kmorin            #+#    #+#             */
/*   Updated: 2024/01/24 15:11:59 by kmorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVITE_HPP
#define INVITE_HPP

#include "ACommand.hpp"
class ACommand;

class Invite : public ACommand {

	public:
		Invite(void);
		~Invite(void);

		virtual void	execute(Server* server, t_Message* msg, Client* client);
};

#endif //INVITE_HPP
