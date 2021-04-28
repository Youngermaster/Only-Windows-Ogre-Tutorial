#pragma once
#include "RenderAOgre.h"
#include "RenderFourHeads.h"

class ExampleSelector
{
public:
	ExampleSelector();
	void selectExample(int index);
private:
	void renderAOgre();
	bool renderFourHeads();
};

