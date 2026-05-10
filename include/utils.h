#ifndef UTILS_H
#define UTILS_H

#include "process.h"

/* Basic helpers */
void swap_process(Process *a, Process *b);

/* Sorting utilities */
void sort_by_arrival(Process p[], int n);
void sort_by_burst(Process p[], int n);
void sort_by_priority(Process p[], int n);

/* Utility math */
int max(int a, int b);

#endif
