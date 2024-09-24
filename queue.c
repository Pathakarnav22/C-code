#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Size of the queue

// Queue structure
struct Queue {
    int items[SIZE];
    int front;
    int rear;
};

// Function to create a queue and initialize front and rear
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Check if the queue is full
int isFull(struct Queue* queue) {
    if (queue->rear == SIZE - 1)
        return 1;
    return 0;
}

// Check if the queue is empty
int isEmpty(struct Queue* queue) {
    if (queue->front == -1)
        return 1;
    return 0;
}

// Add elements into queue (enqueue)
void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full!\n");
    } else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
        printf("Inserted %d\n", value);
    }
}

// Remove element from queue (dequeue)
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
        printf("Deleted %d\n", item);
        return item;
    }
}

// Function to display the queue
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    display(queue);

    dequeue(queue);
    dequeue(queue);

    display(queue);

    return 0;
}




