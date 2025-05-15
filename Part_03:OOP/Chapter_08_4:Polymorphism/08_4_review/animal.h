/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:34:14 by jinwoki2          #+#    #+#             */
/*   Updated: 2025/05/13 19:58:47 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

typedef struct s_animal	t_animal;

t_animal	*animal_new(void);
void		animal_ctor(t_animal *animal);
void		animal_dtor(t_animal *animal);

void		animal_get_name(t_animal *animal, char *name);
void		animal_sound(t_animal *animal);

#endif