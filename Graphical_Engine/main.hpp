#pragma once

#include <iostream>

class World
{
public:
	World(const char* log);
};


World::World(const char * log)
{
	printf(log);
}