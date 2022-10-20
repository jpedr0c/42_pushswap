/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:04:02 by jocardos          #+#    #+#             */
/*   Updated: 2022/10/17 11:04:02 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/ft_printf.h"
# include "../libft/include/get_next_line.h"
# include "../libft/include/libft.h"
# include <limits.h>
# include <stdlib.h>

# define WALL "./images/WALL.xpm"
# define FLOOR "./images/FLOOR.xpm"
# define COIN "./images/COIN.xpm"
# define EXIT_OPEN "./images/EXIT_OPEN.xpm"
# define EXIT_CLOSED "./images/EXIT_CLOSED.xpm"
# define PLAYER_RIGHT "./images/PLAYER_R.xpm"
# define PLAYER_LEFT "./images/PLAYER_L.xpm"

typedef struct s_game
{
	void	*mlx;
	void	*window;
	void	*player;
	void	*floor;
	void	*wall;
	void	*coin;
	void	*exit;
	char	**map;
	char	**map_copy;
	int		count_steps;
	int		count_coins;
	int		available_coins;
	int		count_players;
	int		count_exits;
	int		available_exits;
	int		finish_game;
	int		collected;
	int		columns;
	int		rows;
	int		player_x;
	int		player_y;
}			t_game;

// SO_LONG
int			main(int argc, char **argv);

// UTILS
int			error(char *error);
void		message_finish_game(void);
void		print_steps(t_game *game);
void		free_map(char **map);
int			close_game(t_game *game);

// CONFIGURATION
void		*get_image(t_game *game, char *path);
int			config_game(t_game *game);
void		put_image(int x, int y, t_game *game, void *img);
void		change_player_image(t_game *game, char *new_image);

//CONSTRUCT MAP
int			valid_file_extension(char *path);
void		set_characters(t_game *game, int x, int y);
int			construct_map(t_game *game);

//GENERATE MAP
int			multiple_newline(char *str);
char		*read_file(int fd);
void		set_limits_for_map(t_game *game);
char		**generate_map(t_game *game, char *path);

//EVENTS
void		collected_coins(t_game *game);
int			player_can_move(t_game *game, int x, int y);
void		move_player(t_game *game, int new_x_pos, int new_y_pos);
void		move(int keycode, t_game *game);
int			handle_keypress(int keycode, t_game *game);

//CHECKING MAP
void		init_vars(t_game *game);
void		count_elements_in_map(t_game *game);
int			rule_num_of_elements(t_game *game);
void		count_available_elements(t_game *game, int px, int py);

//VALIDATION MAP
int			check_invalid_char(t_game *game);
int			verify_rectangle(t_game *game);
int			walls_around_map(t_game *game);
int			checking_valid_path(t_game *game, int px, int py);
int			check_valid_map(t_game *game);

#endif