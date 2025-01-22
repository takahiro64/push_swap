/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thine <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:02:22 by thine             #+#    #+#             */
/*   Updated: 2025/01/17 17:23:43 by thine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}					t_stack;

int					main(int argc, char *argv[]);
int					ft_check_dup(t_stack *a);
int					ft_atoi2(char *str);
t_stack				*ft_process(int argc, char *argv[]);
t_stack				*ft_sub_process(char *argv[]);
void				ft_error(char *str);
t_stack				*ft_lst_last(t_stack *lst);
int					ft_lst_size(t_stack *lst);
int					ft_min(t_stack *lst);
int					ft_max(t_stack *lst);
int					ft_pa_rarb(t_stack **a, t_stack **b, int nbr);
int					ft_pa_rrarb(t_stack **a, t_stack **b, int nbr);
int					ft_pa_rarrb(t_stack **a, t_stack **b, int nbr);
int					ft_pa_rrarrb(t_stack **a, t_stack **b, int nbr);
int					ft_pb_rarb(t_stack **a, t_stack **b, int nbr);
int					ft_pb_rrarb(t_stack **a, t_stack **b, int nbr);
int					ft_pb_rarrb(t_stack **a, t_stack **b, int nbr);
int					ft_pb_rrarrb(t_stack **a, t_stack **b, int nbr);
t_stack				*ft_push_b(t_stack **a);
void				ft_push_swap(t_stack **stack_a);
int					ft_select_operation_pb(t_stack *a, t_stack *b);
int					ft_select_operation_pa(t_stack *a, t_stack *b);
int					ft_index(t_stack *stack, int nbr);
int					ft_search_insert_position_a(t_stack *a, int nbr);
int					ft_search_insert_position_b(t_stack *b, int nbr);
int					ft_case_rarb_pa(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarb_pa(t_stack *a, t_stack *b, int nbr);
int					ft_case_rarrb_pa(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarrb_pa(t_stack *a, t_stack *b, int nbr);
int					ft_case_rarb_pb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarb_pb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rarrb_pb(t_stack *a, t_stack *b, int nbr);
int					ft_case_rrarrb_pb(t_stack *a, t_stack *b, int nbr);
void				ft_sort_three(t_stack **a);
void				ft_sort_b(t_stack **a, t_stack **b);
t_stack				**ft_sort_a(t_stack **a, t_stack **b);
void				ft_push(t_stack **src, t_stack **dest);
void				ft_pa(t_stack **a, t_stack **b);
void				ft_pb(t_stack **a, t_stack **b);
void				ft_reverse_rotate(t_stack **a);
void				ft_rra(t_stack **a);
void				ft_rrb(t_stack **b);
void				ft_rrr(t_stack **a, t_stack **b);
void				ft_rotate(t_stack **a);
void				ft_ra(t_stack **a);
void				ft_rb(t_stack **b);
void				ft_rr(t_stack **a, t_stack **b);
void				ft_swap(t_stack **a);
void				ft_sa(t_stack **a);
void				ft_sb(t_stack **b);
void				ft_ss(t_stack **a, t_stack **b);
void				ft_add_back(t_stack **stack, t_stack *content);
int					ft_checksorted(t_stack *stack);
t_stack				*ft_stack_new(int nbr);
void				ft_free_stack(t_stack **stack);
void				ft_print_test(t_stack *a, t_stack *b);

#endif
