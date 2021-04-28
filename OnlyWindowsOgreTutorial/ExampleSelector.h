#pragma once
#include "RenderAOgre.h"
#include "RenderFourHeads.h"
#include "RenderANinja.h"

class ExampleSelector
{
public:
	ExampleSelector();
	void selectExample(int index);
private:
	void renderAOgre();
	bool renderFourHeads();
	bool renderANinja();
};

