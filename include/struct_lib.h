/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_lib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:30:14 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/30 18:42:39 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_LIB_H
# define STRUCT_LIB_H

/*******************************/
/*             LST             */
/*******************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*******************************/
/*       GARBAGE COLLECTOR     */
/*******************************/

typedef struct s_gc
{
	t_list			*head;
}					t_gc;

#endif