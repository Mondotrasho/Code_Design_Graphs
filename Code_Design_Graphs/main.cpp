#include "Vertex.h"

int main()
{
	// THE FOLLOWING CODE WOULD BE WITHIN FUNCTIONS DOING A SEARCH
	// create an instance of our functor
	Graph::TestClass testClass;
	Graph::Vertex vertex;

	// function pointer example
	Graph::breadthFirstSearch(vertex.getfirst, Graph::testFunction);
	// functor object example
	breadthFirstSearch(vertex.getfirst, testClass);
	// lambda function example
	Graph::breadthFirstSearch(vertex.getfirst, [](Graph::Vertex*) {
		/* perform test here */
		return false; });
	return 0;

}
