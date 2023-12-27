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
    vector_resize(queue->vector, size + 1);
    size_t back = (queue->front + size) % vector_size(queue->vector);
    vector_set(queue->vector, back, data);
}

Data queue_get(const Queue* queue) {
    return vector_get(queue->vector, queue->front);
}

void queue_remove(Queue* queue) {
    if (!queue_empty(queue)) {
        size_t size = vector_size(queue->vector);
        queue->front = (queue->front + 1) % size;
        if (size > 1 && size - 1 <= vector_size(queue->vector) / 4) {
            vector_resize(queue->vector, size - 1);
        }
    }
}

bool queue_empty(const Queue* queue) {
    return vector_size(queue->vector) == 0;
}