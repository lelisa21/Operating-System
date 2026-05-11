#include <stdio.h>
#include "../../include/scheduler.h"
void scheduler(Process p[], int n, int choice)
{
    switch(choice)
    {
        case 1:
            printf("Running FCFS Scheduling...\n");
            fcfs(p, n);
            break;

        case 2:
            printf("Running SJF Scheduling...\n");
            sjf(p, n);
            break;

        default:
            printf("Invalid choice\n");
    }
}
