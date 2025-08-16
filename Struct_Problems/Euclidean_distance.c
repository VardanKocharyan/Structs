#include <stdio.h>
#include <math.h>

float Euclidean_distance( float x1, float y1, float x2, float y2) {
		float dist = sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) );
		return dist;

}
