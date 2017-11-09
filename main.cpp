#include <iostream>

struct VERTEX
{
	VERTEX *parent;
};

struct EDGE
{
	uint weight;
	VERTEX u;
	VERTEX v;
	EDGE *parent;
};

bool find(VERTEX u, VERTEX v)
{
	VERTEX *temp_u = &u;
	VERTEX *temp_v = &v;

	while (temp_u->parent != temp_u)
	{
		temp_u = temp_u->parent;
	}
	while (temp_v->parent != temp_v)
	{
		temp_v = temp_v->parent;
	}

	return (temp_u == temp_v);
}

void join(VERTEX u, VERTEX v)
{
	VERTEX *temp_u = &u;
	VERTEX *temp_v = &v;

	while (temp_u->parent != temp_u)
	{
		temp_u = temp_u->parent;
	}
	while (temp_v->parent != temp_v)
	{
		temp_v = temp_v->parent;
	}

	temp_u->parent = temp_v;
}
