#pragma once
#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include <iostream>

using namespace Ogre;
using namespace OgreBites;

class RenderFourHeads : public ApplicationContext, public InputListener
{
public:
	RenderFourHeads();
	virtual ~RenderFourHeads() {}

	void setup();
	bool keyPressed(const KeyboardEvent& evt);
};
