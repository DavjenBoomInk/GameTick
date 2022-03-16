#pragma once
#include "Component.h"
#include <set>
class Actor
{
public:
	//Actor();
	//~Actor();

	void Register(World* World);

	std::set<Component*> Components;
	virtual void Tick(float DeltaTime)
	{
	}
private:

};
