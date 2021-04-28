#pragma once

#include "Ogre.h"
#include "OgreApplicationContext.h"

class RenderAOgre : public OgreBites::ApplicationContext, public OgreBites::InputListener
{
public:
	RenderAOgre();
	void setup();
	bool keyPressed(const OgreBites::KeyboardEvent& evt);
};
