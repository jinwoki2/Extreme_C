/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:15:27 by jinwoki2          #+#    #+#             */
/*   Updated: 2025/05/15 15:40:45 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "animal_p.h"

void	__animal_sound(void *ptr)
{
	t_animal	*animal;

	animal = (t_animal *)ptr;
	printf("%s: Beeep\n", animal->name);
}

t_animal	*animal_new(void)
{
	return ((t_animal *)malloc(sizeof(t_animal)));
}

void	animal_ctor(t_animal *animal)
{
	animal->name = (char *)malloc(10 * sizeof(char));
	strcpy(animal->name, "Animal");
	animal->sound_func = __animal_sound;
}

void	animal_dtor(t_animal *animal)
{
	free(animal->name);
}

void	animal_get_name(t_animal *animal, char *buffer)
{
	strcpy(buffer, animal->name);
}

void	animal_sound(t_animal *animal)
{
	animal->sound_func(animal);
}
