#pragma once
#include <vector>


class Edge;

class Vertex {
public:
	Vertex() = default;
	virtual ~Vertex() {}
	
	void remove_edges(const Vertex& vertex);
	void add_edge(Vertex* vertex);

	// custom user data (alternative to deriving)
	void* userData = nullptr;
	// list of edges
	std::vector<Edge*> m_edges;
};
