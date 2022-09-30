/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: mbrule
 *
 * Created on 27 septembre 2022, 11:20
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/syscall.h>

char message[255]; // Zone commune

void *ma_fonction_thread(void *arg) {
    printf("pid du thread : %d \n",getpid());
    printf("tid du thread : %d \n",syscall(SYS_gettid));
    printf("dans le threadl'argument etait :%s\n", (char *) arg);
    
    sleep(3);
    strcpy(message, "Bye!");
    pthread_exit((void *) "merci pour le temps CPU");
}

int main() {
    int res;
    pthread_t un_thread;
    void *thread_result;
    

    strcpy(message, "Debian inside");
    printf("pid process principal : %d \n",getpid());
    printf("tid process principal : %d \n",syscall(SYS_gettid));

    res = pthread_create(&un_thread, NULL, ma_fonction_thread, (void *) message);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("attente de la fin du thread...\n");

    res = pthread_join(un_thread, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    printf("OK, valeur de retour du Thread join :%s\n", (char *) thread_result);
    printf("Le message est maintenant %s\n", message);
    exit(EXIT_SUCCESS);
}
