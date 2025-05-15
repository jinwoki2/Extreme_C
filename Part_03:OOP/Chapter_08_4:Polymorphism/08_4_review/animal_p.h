/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_p.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoki2 <jinwoki2@student.42gyeongsan.kr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:34:53 by jinwoki2          #+#    #+#             */
/*   Updated: 2025/05/13 19:34:54 by jinwoki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_P_H
# define ANIMAL_P_H

typedef void	(*t_sound_func) (void *ptr);

typedef struct s_animal
{
	char			*name;
	t_sound_func	sound_func;
}					t_animal;

#endif