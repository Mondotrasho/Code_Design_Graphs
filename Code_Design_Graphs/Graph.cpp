#include "Graph.h"
#include <algorithm>

void Graph::Vertex::add_edge(Vertex* vertex)
{
	Graph::Edge* edge = nullptr;
	edge->target = vertex;
	edges.push_back(edge);
}

void Graph::Vertex::add_vertex(Vertex& vertex)
{
	m_vertices.push_back(vertex);
}

void Graph::Vertex::remove_edges(const Vertex& vertex)
{
	const auto is_it_there = std::find(edges.begin(), edges.end(), vertex);
	while (is_it_there != edges.end()) {
		edges.erase(std::remove_if(edges.begin(), edges.end(), vertex), edges.end());
	}
}

void Graph::Vertex::remove_vertex(Vertex& vertex)
{
	remove_edges(vertex);
	m_vertices.erase(std::remove_if(m_vertices.begin(), m_vertices.end(), vertex), m_vertices.end());
}
