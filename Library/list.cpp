#include <stdlib.h>
#include "list.h"
#include <iostream>

struct ListItem
{
	int  data;
	
	ListItem* next;
	ListItem* prev;
	ListItem() 
	{
		data = NULL;
		next = nullptr;
		prev = nullptr;
	}
};

struct List
{
	ListItem* item = new ListItem;
	int count = -1;
	~List() 
	{
		while (item->prev != 0)
			item = item->prev;
		while (item = item->next)
			delete item->prev;
		delete item;
	}
};




// �������� ������
List *list_create()
{
	List *bufferlist = new List;
	
    return bufferlist;
}

// �������� ������
void list_delete(List *list)
{
	delete list;
}

// �������� ������ ������� ������
ListItem *list_first(List *list)
{
	while (list->item->prev != 0)
		list->item = list->item->prev;
    return list->item;
}

// ������� ������ �� �������� ������
int list_item_data(ListItem *item)
{
    return item->data;
}

// �������� ��������� ������� ������
ListItem *list_item_next(ListItem *item)
{
    return item->next;
}

// �������� ���������� ������� ������
ListItem *list_item_prev(ListItem *item)
{
    return item->prev;
}

// �������� ������ � ������ ������
ListItem *list_insert(List *list, int data)
{
	ListItem *buffer = new ListItem;
	buffer->data = data;
	if (list->count == -1) {
		buffer->next = 0;
		list->count += 2;
	} else {
	buffer->next = list->item;
	list->count++;
	}
	buffer->prev = 0;
	list->item->prev = buffer;
	list->item = buffer;
	return list->item;

}

// �������� ������ ����� ��������� ��������
ListItem *list_insert_after(List *list, ListItem *item, int data)
{
	while (list->item->prev != 0)
		list->item = list->item->prev;
	while (list->item != item )
		list->item = list->item->next;

	ListItem * buffer = new ListItem;
	buffer->data = data;
	buffer->prev = list->item;
	buffer->next = list->item->next;
	list->item->next = buffer;
	list->item = buffer->next;
	list->item->prev = buffer;

	list->count++;
	return list->item;
}

// ������� �������� ������� ������
ListItem *list_erase(List *list, ListItem *item)
{
	while (list->item->prev != 0)
		list->item = list->item->prev;
	while (list->item != item)
		list->item = list->item->next;
	ListItem * buf = new ListItem;
	buf = list->item;
	if (list->item->prev != 0)
	{
		list->item = list->item->prev;
		list->item->next = buf->next;
		list->item = list->item->next;
		list->item->prev = buf->prev;
	}
	else 
	{
		list->item = list->item->next;
		list->item->prev = 0;
	}
		
	list->count--;
	
	return list->item;
}

// ������� ������� ������, ��������� �� ��������
ListItem *list_erase_next(List *list, ListItem *item)
{
	while (list->item->prev != 0)
		list->item = list->item->prev;
	while (list->item != item)
	{
		list->item = list->item->next;
	}
	list->item = list->item->next;

	list->item->prev->next = list->item->next;
	list->item->next->prev = list->item->prev;
	list->count--;
	return list->item;
}

// �������� ��������� ������� ������
ListItem *list_last(List *list) 
{
	while (list->item->next != 0)
		list->item = list->item->next;
	return list->item;

}

