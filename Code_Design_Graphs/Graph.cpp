#include "Graph.h"
#include <algorithm>
#include <list>
#include <queue>

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

Graph::Vertex* Graph::depthFirstSearch(Vertex* start, std::function<bool(Vertex*)> predicate)
{
	//Procedure BreadthFirstSearch(startVertex, predicate)
	//	Let openList be a Queue
	std::queue<Vertex> Open = std::queue<Vertex>();
	//	Let closedList be a List
	std::list<Vertex> Closed = std::list<Vertex>();
	//	Add startVertex to openList
	Open.emplace(start);
	//	While openList is not empty
	while(!Open.empty())
	{
		//	Let currentVertex be next item in openList
		auto current = Open.front();
		//	// Process the node
		//	If predicate(currentVertex) is true return currentVertex
		if (predicate) {return Open.front; }
		//	remove currentVertex from openList
		Open.pop();
		//	Add currentVertex to closedList
		Closed.emplace_back(current);
		//	for all connections c in currentVertex
		for (auto connect : current.edges)
		{
			//		Add c to openList if not in closedList
			if (!(std::find(Closed.begin(), Closed.end(), connect) != Closed.end()))
			{
				Open.emplace(connect);
			}
			
		}
		
	}
	
}

Graph::Vertex* Graph::breadthFirstSearch(Vertex* start, std::function<bool(Vertex*)> predicate)
{
}
