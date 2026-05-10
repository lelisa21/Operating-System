#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"

/* Non-preemptive algorithms */
void fcfs(Process p[], int n);
void sjf(Process p[], int n);
void priority_scheduling(Process p[], int n);

/* Preemptive algorithms */
void srtf(Process p[], int n);

/* Round Robin */
void round_robin(Process p[], int n, int quantum);

#endif
