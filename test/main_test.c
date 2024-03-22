/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:41 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/03/22 15:47:41 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bool_test.c"
#include "char_test.c"
#include "fd_test.c"
#include "bfl.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	/* <-- Bool --> */
	printf("\033[33mBool\033[0m\n");

	if (ft_isalnum_test())
		printf("ft_isalnum_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isalnum_test: \033[31mKO\033[0m\n");
		return (1);
	}
	if (ft_isalpha_test())
		printf("ft_isalpha_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isalpha_test: \033[31mKO\033[0m\n");
		return (2);
	}
	if (ft_isascii_test())
		printf("ft_isascii_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isascii_test: \033[31mKO\033[0m\n");
		return (3);
	}
	if (ft_isblank_test())
		printf("ft_isblank_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isblank_test: \033[31mKO\033[0m\n");
		return (4);
	}
	if (ft_isdigit_test())
		printf("ft_isdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isdigit_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (ft_islower_test())
		printf("ft_islower_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_islower_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (ft_isprint_test())
		printf("ft_isprint_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isprint_test: \033[31mKO\033[0m\n");
		return (6);
	}
	if (ft_isupper_test())
		printf("ft_isupper_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isupper_test: \033[31mKO\033[0m\n");
		return (7);
	}
	if (ft_isxdigit_test())
		printf("ft_isxdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isxdigit_test: \033[31mKO\033[0m\n");
		return (8);
	}

	/* <-- Char --> */
	printf("\n\033[33mChar\033[0m\n");

	if (ft_toupper_test())
		printf("ft_toupper_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_toupper_test: \033[31mKO\033[0m\n");
		return (9);
	}
	if (ft_tolower_test())
		printf("ft_tolower_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_tolower_test: \033[31mKO\033[0m\n");
		return (10);
	}

	/* <-- Fd --> */
	printf("\n\033[33mFd\033[0m\n");

	int		fd;
	int		status;
	pid_t	pid;

	fd = open("file1.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putaddress_fd_test(fd) != 0)
	{
		printf("ft_putaddress_fd: \033[31mKO\033[0m\n");
		return (11);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file1.txt", "file2.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putaddress_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putaddress_fd: \033[31mKO\033[0m\n");
				return (12);
			}
		}
	}

	fd = open("file3.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putchar_fd_test(fd) != 0)
	{
		printf("ft_putchar_fd: \033[31mKO\033[0m\n");
		return (13);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file3.txt", "file4.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putchar_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putchar_fd: \033[31mKO\033[0m\n");
				return (14);
			}
		}
	}

	fd = open("file5.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putendl_fd_test(fd) != 0)
	{
		printf("ft_putendl_fd: \033[31mKO\033[0m\n");
		return (15);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file5.txt", "file6.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putendl_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putendl_fd: \033[31mKO\033[0m\n");
				return (16);
			}
		}
	}

	fd = open("file7.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_puthexl_fd_test(fd) != 0)
	{
		printf("ft_puthexl_fd: \033[31mKO\033[0m\n");
		return (17);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file7.txt", "file8.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_puthexl_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_puthexl_fd: \033[31mKO\033[0m\n");
				return (18);
			}
		}
	}

	fd = open("file9.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_puthexu_fd_test(fd) != 0)
	{
		printf("ft_puthexu_fd: \033[31mKO\033[0m\n");
		return (19);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file9.txt", "file10.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_puthexu_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_puthexu_fd: \033[31mKO\033[0m\n");
				return (20);
			}
		}
	}

	fd = open("file11.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putnbr_fd_test(fd) != 0)
	{
		printf("ft_putnbr_fd: \033[31mKO\033[0m\n");
		return (21);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file11.txt", "file12.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putnbr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putnbr_fd: \033[31mKO\033[0m\n");
				return (22);
			}
		}
	}

	fd = open("file13.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putstr_fd_test(fd) != 0)
	{
		printf("ft_putstr_fd: \033[31mKO\033[0m\n");
		return (23);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file13.txt", "file14.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putstr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putstr_fd: \033[31mKO\033[0m\n");
				return (24);
			}
		}
	}

	fd = open("file15.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (ft_putunbr_fd_test(fd) != 0)
	{
		printf("ft_putunbr_fd: \033[31mKO\033[0m\n");
		return (25);
	}
	close(fd);
	pid = fork();
	if (pid < 0)
		return (-1);
	else if (pid == 0)
		execl("/usr/bin/diff", "diff", "file15.txt", "file16.txt", (char *)NULL);
	else
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			if (WEXITSTATUS(status) == 0)
				printf("ft_putunbr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("ft_putunbr_fd: \033[31mKO\033[0m\n");
				return (26);
			}
		}
	}
	return (0);
}
