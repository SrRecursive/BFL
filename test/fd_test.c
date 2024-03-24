/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/03/24 14:53:47 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

typedef union u_address
{
	unsigned long long	number;
	void				*pointer;
}						t_address;

int	ft_putaddress_fd_test(int fd)
{
	t_address	address;
	int			x;
	pid_t		pid;
	char		str[] = "Hello World"; 
	double		y;
	int			outfile;
	int			original_stdout;

	address.pointer = str;
	ft_putaddress_fd(address.number, fd);
	address.pointer = &str[1];
	ft_putaddress_fd(address.number, fd);
	address.pointer = &x;
	ft_putaddress_fd(address.number, fd);
	address.pointer = &address;
	ft_putaddress_fd(address.number, fd);
	address.pointer = &pid;
	ft_putaddress_fd(address.number, fd);
	address.pointer = &str[5];
	ft_putaddress_fd(address.number, fd);
	address.pointer = &y;
	ft_putaddress_fd(address.number, fd);
	pid = fork();
	if (pid < 0)
		return (1);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (2);
		outfile = open("file2.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (3);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (4);
		printf("%p", str); 
		printf("%p", &str[1]);
		printf("%p", &x);
		printf("%p", &address);
		printf("%p", &pid);
		printf("%p", &str[5]);
		printf("%p", &y);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (5);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_putchar_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 255; i++)
		if (ft_isprint(i))
			ft_putchar_fd((char)i, fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file4.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		for (int i = 0; i < 255; i++)
			if (ft_isprint(i))
				printf("%c", i);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_putendl_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	ft_putendl_fd("Hello world", fd);
	ft_putendl_fd("this is", fd);
	ft_putendl_fd("my test\n", fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file6.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		printf("Hello world\n");
		printf("this is\n");
		printf("my test\n\n");
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_puthexl_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		ft_puthexl_fd(i, fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file8.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		for (int i = 0; i < 100000; i++)
			printf("%x", i);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_puthexu_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		ft_puthexu_fd(i, fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file10.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		for (int i = 0; i < 100000; i++)
			printf("%X", i);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}


int	ft_putnbr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		ft_putnbr_fd(i, fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file12.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		for (int i = 0; i < 100000; i++)
			printf("%d", i);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_putstr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	ft_putstr_fd("Hello world", fd);
	ft_putstr_fd("How are you?", fd);
	ft_putstr_fd("This is a simple test", fd);
	ft_putstr_fd("Not an expert", fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file14.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		printf("Hello world");
		printf("How are you?");
		printf("This is a simple test");
		printf("Not an expert");
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}

int	ft_putunbr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (unsigned int i = 0; i < 100000; i++)
		ft_putunbr_fd(i, fd);
	pid = fork();
	if (pid < 0)
		return (2);
	else if (pid == 0)
	{
		original_stdout = dup(STDOUT_FILENO);
		if (original_stdout < 0)
			return (3);
		outfile = open("file16.txt", O_CREAT | O_WRONLY, 0622);
		if (outfile < 0)
			return (4);
		if (dup2(outfile, STDOUT_FILENO) < 0)
			return (5);
		for (unsigned int i = 0; i < 100000; i++)
			printf("%u", i);
		close(outfile);
		if (dup2(STDOUT_FILENO, original_stdout) < 0)
			return (6);
		exit(0);
	}
	else
		waitpid(pid, 0, 0);
	return (0);
}
