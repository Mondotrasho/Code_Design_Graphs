#pragma once
#include "Vertex.h"


class Edge {
public:
	Edge(Vertex* t = nullptr) : target(t) {}
	virtual ~Edge() {}
	// the target vertex
	Vertex* target;
	// custom user data (alternative to deriving)
	void* userData = nullptr;

};
