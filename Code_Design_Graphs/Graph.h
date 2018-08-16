
#pragma once
#include <vector>
#include <functional>


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
		//get
		std::vector<Vertex>::iterator getfirst()
		{
			return m_vertices.begin();
		}
		//add
		void add_edge(Vertex* vertex);
		void add_vertex(Vertex& vertex);
		//remove
		void remove_edges(const Vertex& vertex);
		void remove_vertex(Vertex& vertex);

		// custom user data (alternative to deriving)
		void* userData = nullptr;


	};


	Vertex* depthFirstSearch(Vertex* start,std::function<bool(Vertex*)> predicate);
	Vertex* breadthFirstSearch(Vertex* start,std::function<bool(Vertex*)> predicate);


	// testFunction AND TestClass WOULD BE DECLARED AHEAD OF TIME
	bool testFunction(Graph::Vertex* vertex) {
		/* put test / comparison code here */
	}
	class TestClass {
	public:
		TestClass() {}
		~TestClass() {}
		bool operator ()(Graph::Vertex* vertex) {
			/* perform test / comparison code here */
		}
	};
	

}


