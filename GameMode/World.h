#pragma once
#include <set>
#include "Actor.h"
#include <functional>
#include <vector>

struct Ticker
{
	void* Context;
	std::function<void(void*, float)> TickFunction;
};

class World
{
public:
	//World();
	//~World();

	std::set<Actor*> Actors;
	std::vector<Ticker> Tickers;

	virtual void Tick(float DeltaTime)
	{
		for (Ticker Ticker:Tickers)
		{
			Ticker.TickFunction(Ticker.Context, DeltaTime);
		}
	}
private:

};



