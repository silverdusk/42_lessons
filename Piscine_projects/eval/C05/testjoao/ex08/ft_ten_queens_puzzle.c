/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:43:41 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/07 15:21:31 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

void	print_board(char board[10][10], int row, int col)
{
	row = 0;
	col = 0;
	while (col++ < 10)
	{
		row = 0;
		while (row++ < 10)
			if (board[row - 1][col - 1] == 'Q')
				ft_putchar(row - 1);
	}
	write(1, "\n", 1);
}

int	check_pos(char board[10][10], int row, int col)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < 9)
		if (board[row][i] == 'Q')
			return (0);
	i = row;
	j = col;
	while (i-- >= 0 && j-- >= 0)
		if (board[i + 1][j + 1] == 'Q')
			return (0);
	i = row;
	j = col;
	while (i++ < 10 && j-- >= 0)
		if (board[i - 1][j + 1] == 'Q')
			return (0);
	return (1);
}

int	solve_queens(char board[10][10], int col)
{
	int	solutions;
	int	i;

	if (col >= 10)
	{
		print_board(board, 0, 0);
		return (1);
	}
	solutions = 0;
	i = -1;
	while (i++ < 9)
	{
		if (check_pos(board, i, col))
		{
			board[i][col] = 'Q';
			solutions += solve_queens(board, col + 1);
			board[i][col] = '.';
		}
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int		rows;
	int		cols;
	char	board[10][10];
	int		solutions;

	rows = 10;
	cols = 10;
	while (rows-- > 0)
	{
		cols = 10;
		while (cols-- > 0)
			board[rows][cols] = '.';
	}
	solutions = solve_queens(board, 0);
	return (solutions);
}

// https://www.durangobill.com/N_Queens.html
int	main(void)
{
	printf("%d\n",ft_ten_queens_puzzle());
}
