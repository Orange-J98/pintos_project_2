#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H
#define USERPROG

#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);



struct process{
    struct list_elem elem;
    //struct thread *thread
    int thread; // thread id
};
/*
a pipe to record process's exit status to implement wait sys call
read list 
write list
*/
enum action{
    EXEC,
    WAIT
};

#endif /* userprog/process.h */
