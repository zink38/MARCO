#pragma once

#include "Common.h"

class Base
{
private:
	void sendIdleWorkersToMinerals();
	void trainAdditionalWorkers();
	void buildAdditionalSupply();

public:
	Base();
	void onFrame();
};

