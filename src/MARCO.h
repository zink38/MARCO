#pragma once
#include "Common.h"
#include "MapTools.h"
#include "BaseManager.h"


class MARCO
{
    MapTools m_mapTools;
	BaseManager m_baseManager;

public:

    MARCO();

    // helper functions to get you started with bot programming and learn the API

    void drawDebugInformation();

    // functions that are triggered by various BWAPI events from main.cpp
	void onStart();
	void onFrame();
	void onEnd(bool isWinner);
	void onUnitDestroy(BWAPI::Unit unit);
	void onUnitMorph(BWAPI::Unit unit);
	void onSendText(std::string text);
	void onUnitCreate(BWAPI::Unit unit);
	void onUnitComplete(BWAPI::Unit unit);
	void onUnitShow(BWAPI::Unit unit);
	void onUnitHide(BWAPI::Unit unit);
	void onUnitRenegade(BWAPI::Unit unit);
};