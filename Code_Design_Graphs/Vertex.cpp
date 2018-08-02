#include <algorithm>
#include "Vertex.h"
#include "Edge.h"

void Vertex::add_edge(Vertex* vertex)
{

	Edge* edge = nullptr;
	edge->target = vertex;
	m_edges.push_back(edge);
}
void Vertex::remove_edges(const Vertex& vertex)
{
	const auto is_it_there = std::find(m_edges.begin(), m_edges.end(), vertex);
	while (is_it_there != m_edges.end()) {
		m_edges.erase(std::remove_if(m_edges.begin(), m_edges.end(), vertex), m_edges.end());
	}
}