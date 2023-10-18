#include <stdio.h>
#include <stdlib.h>

// Function to find the minimum number of buses required
int minBusesRequired(int s1, int d1, int s2, int d2, int s3, int d3) {
    int timeline[25] = {0}; // Initialize the timeline array with 0
    int max_time = 0; // Initialize the maximum time as 0

    // Update the timeline array with the orders
    for (int i = s1; i < d1; i++) {
        timeline[i]++;
        if (i > max_time) {
            max_time = i;
        }
    }
    for (int i = s2; i < d2; i++) {
        timeline[i]++;
        if (i > max_time) {
            max_time = i;
        }
    }
    for (int i = s3; i < d3; i++) {
        timeline[i]++;
        if (i > max_time) {
            max_time = i;
        }
    }

    // Find the maximum number of tasks at any time
    int max_tasks = 0;
    for (int i = 0; i <= max_time; i++) {
        if (timeline[i] > max_tasks) {
            max_tasks = timeline[i];
        }
    }

    return max_tasks; // Return the minimum number of buses required
}

int main() {
    int s1, d1, s2, d2, s3, d3;
    // Input the departure and arrival times
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // Calculate the minimum number of buses required
    int min_buses = minBusesRequired(s1, d1, s2, d2, s3, d3);

    // Print the result
    printf("%d\n", min_buses);

    return 0;
}
