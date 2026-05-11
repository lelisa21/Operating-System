#include "../../include/scheduler.h"

void fcfs(Process p[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            int should_swap = 0;

            // Sort by arrival time 
            if (p[j].arrival_time > p[j + 1].arrival_time)
            {
                should_swap = 1;
            }

            // Tie breaker: smaller PID first 
            else if (p[j].arrival_time ==
                     p[j + 1].arrival_time)
            {
                if (p[j].pid > p[j + 1].pid)
                {
                    should_swap = 1;
                }
            }

            if (should_swap)
            {
                Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }



    int current_time = 0;

    for (i = 0; i < n; i++)
    {
        // CPU idle until process arrives 
        if (current_time < p[i].arrival_time)
        {
            current_time = p[i].arrival_time;
        }

        // Response time 
        p[i].response_time =
            current_time - p[i].arrival_time;

        // Waiting time 
        p[i].waiting_time =
            current_time - p[i].arrival_time;

        // Execute process 
        current_time += p[i].burst_time;

        p[i].completion_time = current_time;

        // Turnaround time 
        p[i].turnaround_time =
            p[i].completion_time -
            p[i].arrival_time;

        // Process finished 
        p[i].remaining_time = 0;
        p[i].started = 1;
    }
}
