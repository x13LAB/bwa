#ifndef KTHREAD_H_
#define KTHREAD_H_

void kt_for(int n_threads, void (*func)(void*,int,int), void *data, long n);
void kt_for_cuda(int n_threads, void (*func)(void*,int,int), void *data, long n);

#endif
