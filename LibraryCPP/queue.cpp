#include "queue.h"

struct Queue {
    Vector* vector;
    size_t front;
};

Queue* queue_create() {
    Queue* queue = new Queue;
    queue->vector = vector_create();
    queue->front = 0;
    return queue;
}

void queue_delete(Queue* queue) {
    vector_delete(queue->vector);
    delete queue;
}

void queue_insert(Queue* queue, Data data) {
    size_t size = vector_size(queue->vector);
    if (size == 0) {
        queue->front = 0;
    }
    size_t back = (queue->front + size) % (size + 1);

    vector_set(queue->vector, back, data);
    vector_resize(queue->vector, size + 1);
}
Data queue_get(const Queue* queue) {
   return vector_get(queue->vector, queue->front);
}

void queue_remove(Queue* queue) {
    if (!queue_empty(queue)) {
        queue->front = (queue->front + 1) % vector_size(queue->vector);
        vector_resize(queue->vector, vector_size(queue->vector) - 1);
    }
}

bool queue_empty(const Queue* queue) {
    return vector_size(queue->vector) == 0;
}