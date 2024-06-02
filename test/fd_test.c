/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 10:53:17 by ribana-b         ###   ########.com      */
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

int	bfl_putaddress_fd_test(int fd)
{
	t_address	address;
	int			x;
	pid_t		pid;
	char		str[] = "Hello World"; 
	double		y;
	int			outfile;
	int			original_stdout;

	address.pointer = str;
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &str[1];
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &x;
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &address;
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &pid;
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &str[5];
	bfl_putaddress_fd(address.number, fd);
	address.pointer = &y;
	bfl_putaddress_fd(address.number, fd);
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

int	bfl_putchar_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 255; i++)
		if (bfl_isprint(i))
			bfl_putchar_fd((char)i, fd);
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
			if (bfl_isprint(i))
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

int	bfl_putendl_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	bfl_putendl_fd("Hello world", fd);
	bfl_putendl_fd("this is", fd);
	bfl_putendl_fd("my test\n", fd);
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

int	bfl_puthexl_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		bfl_puthexl_fd(i, fd);
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

int	bfl_puthexu_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		bfl_puthexu_fd(i, fd);
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


int	bfl_putnbr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (int i = 0; i < 100000; i++)
		bfl_putnbr_fd(i, fd);
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

int	bfl_putstr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	bfl_putstr_fd("Hello world", fd);
	bfl_putstr_fd("How are you?", fd);
	bfl_putstr_fd("This is a simple test", fd);
	bfl_putstr_fd("Not an expert", fd);
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

int	bfl_putunbr_fd_test(int fd)
{
	pid_t	pid;
	int		outfile;
	int		original_stdout;

	for (unsigned int i = 0; i < 100000; i++)
		bfl_putunbr_fd(i, fd);
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
