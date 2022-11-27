#ifndef GRAPH_H
#define GRAPH_H

#pragma once

#include "list.h"
#include <cstdio>
#include <iostream>

using namespace std;

template <typename Data, typename Weight>
//typedef int Data;
class Graph{
public:
	Graph(Data data, Weight weight) { 
		for (size_t i = 0; i < weight; i++){
			this->add_vertex(data);
		}
		this->weight = weight;
	}
	~Graph() { vertexes.list_delete(&vertexes); }

	struct Edge;

	struct Vertex {
	public:
		Vertex() { this->data = NULL; };
		Vertex(Data data) { this->data = data; }
		~Vertex() {
			auto itemDel = edges.first();

			while (itemDel != nullptr) {
				delete itemDel->data();
				itemDel = itemDel->next();
			}
		}
		void show_edges() {
			if (this->edges.list_empty()) throw "\nEmpty list edges!\n";
			else {
				cout << "Ð¸áðà äëÿ âåðøèíû " << this->data << ": ";
				for (int i = 0; i < edges.getSize(); i++) {
					cout << this->edges[i]->get_weight() << " ";
				}
			}
			cout << "\n\n";
		};
		void show_neighbours() {
			if (this->edges.list_empty()) throw "\nEmpty list edges!\n";
			else {
				cout << "Ñîñåäè äëÿ âåðøèíû " << this->data << ": ";
				for (int i = 0; i < edges.getSize(); i++) {
					cout << this->edges[i]->get_vertex()->get_data() << " ";
				}
			}
			cout << "\n\n";
		};
		void set_data(Data data) { this->data = data; };
		Data get_data() { return this->data; };
		Edge* get_edge(Vertex* vertex) {
			for (auto item = edges.first(); item; item = item->next_item) {
				if (item->data()->get_vertex() == vertex) {
					return item->data();
				}
			}
			return nullptr;
		};
		void remove_edge(Vertex* vertex) {
			for (auto item = edges.first(); item; item = item->next_item) {
				if (item->data()->get_vertex() == vertex) {
					delete item->data();
					edges.erase(item);
					break;
				}
			}
		};
		void add_edge(Vertex* vertex, Weight weight) {
			this->edges.push_back(new Edge(vertex, weight));
		};

		Data data;
		List<Edge*> edges;
	};
	struct Edge {
	public:
		Edge() {
			this->weight = NULL;
			this->in = nullptr;
		};
		Edge(Vertex* in) {
			this->in = in;
			this->weight = NULL;
		};
		Edge(Vertex* in, Data weight) {
			this->weight = weight;
			this->in = in;
		};

		void set_weight(Data weight) { this->weight = weight; };
		Data get_weight() { 
			return (this->weight == NULL) ? 0 : this->weight;
		};
		Vertex* get_vertex() { return this->in; }
	private:
		Vertex* in;
		Weight weight;
	};
	struct Iterator {
		typename List<Graph::Edge*>::Item* item;
		Iterator(Vertex* vertex) {
			this->item = vertex->edges.first();
		};
		void operator++() {
			if (item) item = item->next_item;
		};
		Edge* operator*() {
			if (item) return item->data();
			else return nullptr;
		};

	};

	Vertex* add_vertex(Data data) {
		Graph::Vertex* new_vertex = new Vertex(data);
		this->vertexes.push_back(new_vertex);
		this->weight++;
		return new_vertex;
	};
	Data get_vertex_data(size_t index) {
		return this->vertexes[index]->get_data();
	}
	void show_vertexes() {
		if (this->vertexes.list_empty()) throw "Empty vertexes list!\n";
		else {
			cout << "Âåðøèíû â ãðàôå: ";
			for (int i = 0; i < vertexes.getSize(); ++i) {
				cout << vertexes[i]->data << " ";
			}
		}
		cout << "\n\n";
	};
	void delete_vertex(size_t index) {
		if (index >= vertexes.getSize()) throw "Vertex was not found!\n";
		else vertexes.erase(index);
		this->weight--;
	};
	void delete_edge(Vertex* out, Vertex* in) {
		for (auto item = out->edges.first(); item; item = item->next_item) {
			if (item->data()->get_vertex() == in) {
				delete item;
				out->edges.erase(item);
			}
		}
	};
	int find_index(Vertex* vertex) {
		int index = 0;
		for (auto item = vertexes.first(); item; item = item->next()) {
			if (item->data() == vertex) return index;
			index++;
		}
	};
	int find_index_edges(size_t index, Vertex *vertex) {
		int counter = 0;
		for (auto item = get_vertex(index)->edges.first(); item; item = item->next_item) {
			if (item->data()->get_vertex() == vertex) { return counter; }
			counter++;
		}
	};
	bool check_edge_with_empty(Vertex* vertex_out, Vertex *vertex_in) {
		for (auto item = vertex_out->edges.first(); item; item = item->next_item) {
			if (item->data()->get_vertex() == vertex_in) {
				return false;
			}
		}
		return true;
	};
	size_t size() { return this->weight; };
	Vertex* get_vertex(size_t index) { return vertexes[index]; };
	void set_data_from_vertex(size_t index, Data data) {
		get_vertex(index)->set_data(data);
	}
private:
	List<Vertex*> vertexes;
	Weight weight;
};

#endif