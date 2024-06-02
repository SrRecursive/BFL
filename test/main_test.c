/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:41 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 10:22:33 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bool_test.c"
#include "char_test.c"
#include "fd_test.c"
#include "BFL.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	/* <-- Bool --> */
	printf("\033[33mBool\033[0m\n");

	if (bfl_isalnum_test())
		printf("bfl_isalnum_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isalnum_test: \033[31mKO\033[0m\n");
		return (1);
	}
	if (bfl_isalpha_test())
		printf("bfl_isalpha_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isalpha_test: \033[31mKO\033[0m\n");
		return (2);
	}
	if (bfl_isascii_test())
		printf("bfl_isascii_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isascii_test: \033[31mKO\033[0m\n");
		return (3);
	}
	if (bfl_isblank_test())
		printf("bfl_isblank_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isblank_test: \033[31mKO\033[0m\n");
		return (4);
	}
	if (bfl_isdigit_test())
		printf("bfl_isdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isdigit_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (bfl_islower_test())
		printf("bfl_islower_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_islower_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (bfl_isprint_test())
		printf("bfl_isprint_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isprint_test: \033[31mKO\033[0m\n");
		return (6);
	}
	if (bfl_isupper_test())
		printf("bfl_isupper_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isupper_test: \033[31mKO\033[0m\n");
		return (7);
	}
	if (bfl_isxdigit_test())
		printf("bfl_isxdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_isxdigit_test: \033[31mKO\033[0m\n");
		return (8);
	}

	/* <-- Char --> */
	printf("\n\033[33mChar\033[0m\n");

	if (bfl_toupper_test())
		printf("bfl_toupper_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_toupper_test: \033[31mKO\033[0m\n");
		return (9);
	}
	if (bfl_tolower_test())
		printf("bfl_tolower_test: \033[32mOK\033[0m\n");
	else
	{
		printf("bfl_tolower_test: \033[31mKO\033[0m\n");
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
	if (bfl_putaddress_fd_test(fd) != 0)
	{
		printf("bfl_putaddress_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putaddress_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putaddress_fd: \033[31mKO\033[0m\n");
				return (12);
			}
		}
	}

	fd = open("file3.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_putchar_fd_test(fd) != 0)
	{
		printf("bfl_putchar_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putchar_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putchar_fd: \033[31mKO\033[0m\n");
				return (14);
			}
		}
	}

	fd = open("file5.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_putendl_fd_test(fd) != 0)
	{
		printf("bfl_putendl_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putendl_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putendl_fd: \033[31mKO\033[0m\n");
				return (16);
			}
		}
	}

	fd = open("file7.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_puthexl_fd_test(fd) != 0)
	{
		printf("bfl_puthexl_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_puthexl_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_puthexl_fd: \033[31mKO\033[0m\n");
				return (18);
			}
		}
	}

	fd = open("file9.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_puthexu_fd_test(fd) != 0)
	{
		printf("bfl_puthexu_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_puthexu_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_puthexu_fd: \033[31mKO\033[0m\n");
				return (20);
			}
		}
	}

	fd = open("file11.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_putnbr_fd_test(fd) != 0)
	{
		printf("bfl_putnbr_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putnbr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putnbr_fd: \033[31mKO\033[0m\n");
				return (22);
			}
		}
	}

	fd = open("file13.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_putstr_fd_test(fd) != 0)
	{
		printf("bfl_putstr_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putstr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putstr_fd: \033[31mKO\033[0m\n");
				return (24);
			}
		}
	}

	fd = open("file15.txt", O_CREAT | O_WRONLY, 0622);
	if (fd < 0)
		return (-1);
	if (bfl_putunbr_fd_test(fd) != 0)
	{
		printf("bfl_putunbr_fd: \033[31mKO\033[0m\n");
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
				printf("bfl_putunbr_fd: \033[32mOK\033[0m\n");
			else
			{
				printf("bfl_putunbr_fd: \033[31mKO\033[0m\n");
				return (26);
			}
		}
	}
	return (0);
}
