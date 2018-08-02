
#pragma once
#include <vector>


// graphs
namespace Graph {
	class Vertex;
	// define an edge / link
	class Edge {
	public:
		Edge(Vertex* t = nullptr) : target(t) {}
		virtual ~Edge() {}
		// the target vertex
		Vertex* target;
		// custom user data (alternative to deriving)
		void* userData = nullptr;
		
	};

	
	// MORE WILL GO HERE!
	class Vertex {
	public:
		Vertex() {}
		virtual ~Vertex() {}
		// list of edges
		std::vector<Graph::Edge*> edges;
		std::vector<Vertex> m_vertices;
		//add
		void add_edge(Vertex* vertex);
		void add_vertex(Vertex& vertex);
		//remove
		void remove_edges(const Vertex& vertex);
		void remove_vertex(Vertex& vertex);

		// custom user data (alternative to deriving)
		void* userData = nullptr;
	};


	


	

}


