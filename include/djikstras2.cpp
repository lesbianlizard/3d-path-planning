#include "djikstras2.hpp"

void Djikstras::findStartEnd()
{
	for(int i = 0; i < vertexArray.size(); i++)
	{
		if(compareVerticies(vertexArray[i]->pointer,start) == true )
		{
			startIndex = i;
		}
		if(compareVerticies(vertexArray[i]->pointer,end) == true )
		{
			endIndex = i;
		}
	}
}
void Djikstras::setBadVerticies()
{
	for(int i = 0; i < vertexArray.size(); i++)
	{
		for(int j = 0; j < badVerticies.size(); j++)
		{
		if(compareVerticies(vertexArray[i]->pointer,badVerticies[j]) == true )
		{
			vertexArray[i]->value = -10000;
			vertexArray[i]->visited = true;
		}
		}
	}

}
void Djikstras::findShortestPath()
{
	int n = totalNumVerticies - start - badVerticies.size();	
	holder.insert(holder.begin(),*start);
	vertexArray[start]->value = 0;
	vertexArray[start]->visited = true;
	int check = 0;
	VertexHolder * current; 
	current->pointer = holder[0];
	current->value = holder[0].value;
	while(check != n)
	{
		current->pointer = holder[0];
		current->value = holder[0].value;
		for(int i = 0; i < current->pointer->points_to.size(); i++)
		{		
			holder.insert(holder.begin(),current->pointer->points_to[i]);
			if(current->value < current->pointer->points
					//Need to have vertex class hold the value that way dont have to do anything weird with vertex holder and dijkstras. will need to change multiple things in dijkstras 2  and vertex holder to make this work.
					}
					}


					}
					void Djikstras::translateShortestPath();

