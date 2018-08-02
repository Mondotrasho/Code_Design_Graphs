#include "Graph.h"
#include <algorithm>


Graph::Graph()
{
}


Graph::~Graph()
{}


void Graph::add_vertex(Vertex& vertex)
{
	m_vertices.push_back(vertex);
}



void Graph::remove_vertex(Vertex& vertex)
{
	//go through the vector looking for matching edges and removes them
	for (const Vertex& element : m_vertices)
	{
		
		remove_vertex(vertex);
	}
	//then removes the vertex its self
	m_vertices.erase(std::remove_if(m_vertices.begin(), m_vertices.end(), vertex), m_vertices.end());

}