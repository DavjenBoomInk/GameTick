#include "World.h"
#include "Component.h"

void Component::Register(World* World) 
{
	Ticker Ticker;
	Ticker.Context = this;
	Ticker.TickFunction = &Component::TickComponent;
	World->Tickers.push_back(Ticker);
}