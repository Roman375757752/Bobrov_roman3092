#ifndef LIST_H
#define LIST_H

// List
// Stores integer values inside
typedef int Data;

struct ListItem
{
private:
    ListItem* _next;
    Data _value;
    friend class List;
public:
    ListItem(Data, ListItem*);
    Data list_item_data() const;
    ListItem* list_item_next() const;
};

struct List
{
private:
    friend class Stack;
    ListItem* head;
public:
    List();
    ~List();

    ListItem* list_first() const;
<<<<<<< HEAD
    void list_insert_after(ListItem*, Data);
    void push_front(Data);
    void pop();
=======
    void list_insert(Data);
    void list_insert_after(ListItem*, Data);
    void Insert(Data);
    void Pop();
>>>>>>> 547f7fc0a8ca7bf2c2e410c9a04bb5f559cc353c
    void list_erase_next(ListItem*);
};







// Creates new list
//List *list_create();

// Destroys the list and frees the memory
//void list_delete(List *list);

// Retrieves the first item from the list
//ListItem *list_first(List *list);

// Extracts data from the list item
//Data list_item_data(const ListItem *item);

// Returns list item following after the specified one
//ListItem *list_item_next(ListItem *item);

// Returns previous element for the specified item.
// Not applicable for the singly linked lists.
//ListItem *list_item_prev(ListItem *item);

// Inserts new list item into the beginning
//ListItem *list_insert(List *list, Data data);

// Inserts new list item after the specified item
//ListItem *list_insert_after(List *list, ListItem *item, Data data);

// Deletes the specified list item.
// Not applicable for the singly linked lists.
// Should be O(1)
//ListItem *list_erase(List *list, ListItem *item);

// Deletes the list item following the specified one
// Should be O(1)
ListItem *list_erase_next(List *list, ListItem *item);

#endif
