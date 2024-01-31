/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-navy-guillaume.deplaine
** File description:
** connect
*/

#ifndef CONNECT_H_
    #define CONNECT_H_
    #include "my.h"
    #include <signal.h>
    #define other_sig(a) (((a) == 1 || (a) == SIGUSR1) ? (SIGUSR2) : (SIGUSR1))

struct count {
    int sig1;
    int sig2;
    int test;
    int pid;
    bool sender;
};

extern struct count sig_counter;

void get_count(int sig, siginfo_t *info, void *context);
int put_default(int argc, char **argv);
void process_info(void);
void kill_usr_count(int count, int nb, struct sigaction *sa);
int get_info(int usr_nb);
void get_pid_sig(int sig, siginfo_t *info, void *context);

#endif
