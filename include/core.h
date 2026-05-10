#ifndef CORE_H
#define CORE_H

#include "process.h"

/* Input handling */
void get_process_input(Process p[], int *n);

/* Output display */
void print_process_table(Process p[], int n);
void print_metrics(Process p[], int n);

/* Gantt chart */
void print_gantt_chart(int timeline[], int size);

/* Metrics calculation */
void calculate_metrics(Process p[], int n);

#endif
