#pragma once

class World;

class Component
{
public:
	//Component();
	//~Component();

	void Register(World* World);

	virtual void TickComponent(float DeltaTime)
	{
	}
private:

};
