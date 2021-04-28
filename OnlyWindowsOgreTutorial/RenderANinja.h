#pragma once
#include <exception>
#include <iostream>

#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include "OgreCameraMan.h"

using namespace Ogre;
using namespace OgreBites;

class RenderANinja
	: public ApplicationContext
	, public InputListener
{
public:
	RenderANinja();
	virtual ~RenderANinja();


	void setup();
	bool keyPressed(const KeyboardEvent& evt);
};
