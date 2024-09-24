#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Process {
    int id;
    int burstTime;
};

struct Queue {
    struct Process processes[MAX];
    int front;
    int rear;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = 0;
    queue->rear = -1;
    return queue;
}

int isEmpty(struct Queue* queue) {
    return queue->front > queue->rear;
}

void enqueue(struct Queue* queue, struct Process process) {
    queue->processes[++queue->rear] = process;
}

struct Process dequeue(struct Queue* queue) {
    return queue->processes[queue->front++];
}

void printQueue(struct Queue* queue) {
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("Process ID: %d, Burst Time: %d\n", queue->processes[i].id, queue->processes[i].burstTime);
    }
}

void scheduleProcesses(struct Queue* queue) {
    int totalTime = 0;
    printf("\nProcess Execution Order:\n");
    while (!isEmpty(queue)) {
        struct Process current = dequeue(queue);
        printf("Executing Process ID: %d for %d units of time.\n", current.id, current.burstTime);
        totalTime += current.burstTime;
        printf("Total Time: %d units\n", totalTime);
    }
}

int main() {
    struct Queue* queue = createQueue();
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct Process process;
        process.id = i + 1;
        printf("Enter burst time for Process ID %d: ", process.id);
        scanf("%d", &process.burstTime);
        enqueue(queue, process);
    }

    printf("\nProcesses in the queue:\n");
    printQueue(queue);

    scheduleProcesses(queue);

    free(queue);
    return 0;
}
