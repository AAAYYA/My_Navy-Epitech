/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-bsnavy-guillaume.deplaine
** File description:
** process_info
*/

#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include <signal.h>
#include "connect.h"

void process_info(void)
{
    pid_t pid = getpid();
    my_putstr("my_pid: ");
    my_put_nbr(pid);
    my_putstr("\n");
}
