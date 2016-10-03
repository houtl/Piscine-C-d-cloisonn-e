# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thou <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/12 14:58:16 by thou              #+#    #+#              #
#    Updated: 2016/08/12 16:08:12 by thou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

output=$(ifconfig | grep "inet " | sed 's/inet\ //g' | cut -d n -f 1 | sed 's/\ //g' | cut -c 2-)
ligne=$(ifconfig | grep "inet " | sed 's/inet\ //g' | cut -d n -f 1 | sed 's/\ //g' | cut -c 2- | wc -l | sed 's/ //g')

if [ "$ligne" = "0" ]
then
	echo "Je suis perdu!"
else
	echo "$output"
fi
