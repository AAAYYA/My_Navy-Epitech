/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-bsnavy-guillaume.deplaine
** File description:
** kill
*/

#include <stdlib.h>
#include <signal.h>
#include "connect.h"
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

void kill_usr_count(int count, int nb, struct sigaction *sa)
{
    nb = other_sig(other_sig(nb));
    sig_counter.sender = true;
    sig_counter.sig1 = 0;
    sig_counter.sig2 = 0;
    for (int i = 0; i < count; i++) {
        kill(sig_counter.pid, nb);
        pause();
        sigaction(SIGUSR1, sa, NULL);
        usleep(5000);
    }
    kill(sig_counter.pid, other_sig(nb));
    pause();
    sigaction(SIGUSR2, sa, NULL);
    sig_counter.sig1 = 0;
    sig_counter.sig2 = 0;
    sig_counter.sender = false;
}

void get_pid_sig(int sig, siginfo_t *info, void *context)
{
    sig_counter.pid = info->si_pid;
    kill(sig_counter.pid, SIGUSR1);
}

void get_count(int sig, siginfo_t *info, void *context)
{
    if (sig == SIGUSR1) {
        sig_counter.sig1 = sig_counter.sig1 + 1;
        if (!sig_counter.sender) {
            usleep(5000);
            kill(sig_counter.pid, SIGUSR1);
        }
    }
    if (sig == SIGUSR2) {
        sig_counter.sig2 = sig_counter.sig2 + 1;
        if (!sig_counter.sender) {
            usleep(5000);
            kill(sig_counter.pid, SIGUSR2);
        }
    }
    return;
}

int put_default(int argc, char **argv)
{
    sig_counter.sig1 = 0;
    sig_counter.sig2 = 0;
    sig_counter.test = 1;
    sig_counter.sender = false;
    if (argc != 2 && argc != 3)
        return 84;
    if (argc == 3) {
        sig_counter.pid = my_getnbr(argv[1]);
        if (sig_counter.pid == 0)
            return 84;
        sig_counter.sender = true;
        kill(sig_counter.pid, SIGUSR1);
        pause();
        write(1, "successfully connected\n\n", 24);
    } else {
        write(1, "waiting for ennemy connection...\n\n", 34);
        pause();
        write(1, "ennemy connected\n\n", 18);
    }
    sig_counter.sender = false;
    sig_counter.sig1 = 0;
    return 0;
}

int get_info(int usr_nb)
{
    int tmp;

    if (usr_nb == 1)
        tmp = sig_counter.sig1;
    if (usr_nb == 2)
        tmp = sig_counter.sig2;
    sig_counter.sig1 = 0;
    sig_counter.sig2 = 0;
    return tmp;
}
