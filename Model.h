// Class that will contain the faces and vertex's of each model

#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "Face.h"
#include "Vertex.h"

struct model
{

	// Vectors to hold all the face and vertex structs
	std::vector<Face> Faces;		// Face Vector
	std::vector<Vertex> Vertices;	// Vertext Vector

	// Mins and Maxes for the bounding box
	double min_x;
	double min_y;
	double min_z;
	double max_x;
	double max_y;
	double max_z;

 };


#endif
