
#pragma once
#include "Vertex.h"

class Graph
{
public:
	Graph();
	~Graph();
	std::vector<Vertex> m_vertices;
	//add
	
	void add_vertex(Vertex& vertex);
	//remove
	
	void remove_vertex(Vertex& vertex);
private:
	

};


