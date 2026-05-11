#include "../../include/scheduler.h"

void sjf(Process p[], int n)
{
    int completed = 0;
    int current_time = 0;

    while (completed < n)
    {
        int shortest = -1;
        int min_burst = 999999;

        for (int i = 0; i < n; i++)
        {
            if (p[i].arrival_time <= current_time &&
                p[i].remaining_time > 0)
            {
                // Select smaller burst time
            
                if (p[i].burst_time < min_burst)
                {
                    min_burst = p[i].burst_time;
                    shortest = i;
                }

                // Tie breaker: smaller PID first
                   
                else if (p[i].burst_time == min_burst)
                {
                    if (p[i].pid < p[shortest].pid)
                    {
                        shortest = i;
                    }
                }
            }
        }

        // No process available 
        if (shortest == -1)
        {
            current_time++;
            continue;
        }

        // First response 
        if (p[shortest].started == 0)
        {
            p[shortest].response_time =
                current_time -
                p[shortest].arrival_time;

            p[shortest].started = 1;
        }

        // Waiting time 
        p[shortest].waiting_time =
            current_time -
            p[shortest].arrival_time;

        // Execute fully 
        current_time += p[shortest].burst_time;

        p[shortest].remaining_time = 0;

        // Completion time
        p[shortest].completion_time =
            current_time;

        // Turnaround time
        p[shortest].turnaround_time =
            p[shortest].completion_time -
            p[shortest].arrival_time;

        completed++;
    }
}
