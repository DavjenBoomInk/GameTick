#include "World.h"
#include "Actor.h"

void Actor::Register(World* World)
{
	Ticker Ticker;
	Ticker.Context = this;
	Ticker.TickFunction = &Actor::Tick;
	World->Tickers.push_back(Ticker);
}