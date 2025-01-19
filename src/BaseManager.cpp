#pragma once
#include "BaseManager.h"

void BaseManager::addBase(std::unique_ptr<Base> base)
{
    m_bases.push_back(std::move(base));
}

void BaseManager::onFrame()
{
    for (const auto& base : m_bases)
    {
        base->onFrame();
    }
}