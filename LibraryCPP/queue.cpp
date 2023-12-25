#include <cstddef>
#include "queue.h"
#include "list.h"

struct Queue
{
    List* list;
};

Queue *queue_create()
{
    Queue* queue = new Queue;
    queue->list = list_create();
    return queue;
}

void queue_delete(Queue *queue)
{
    list_delete(queue->list);
    delete queue;
}

void queue_insert(Queue *queue, Data data)
{
    list_insert(queue->list, data);
}

Data queue_get(const Queue *queue)
{
    return list_item_data(list_tail(queue->list));
}

void queue_remove(Queue *queue)
{
    list_erase_tail(queue->list);
}

bool queue_empty(const Queue *queue)
{
    return (list_first(queue->list) == NULL);
}
