#pragma once

#include "Common.h"
#include "Base.h"

class BaseManager
{

private:
	std::vector<std::unique_ptr<Base>> m_bases;
	
public:
	void onFrame();
	void addBase(std::unique_ptr<Base> base);


};

