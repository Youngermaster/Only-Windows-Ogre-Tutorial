#include "ExampleSelector.h"

ExampleSelector::ExampleSelector() {

}

void ExampleSelector::selectExample(int index) {
    switch (index)
    {
    case 1:
        renderAOgre();
        break;
    case 2:
        renderFourHeads();
        break;
    case 3:
        renderANinja();
        break;
    default:
        break;
    }
}

void ExampleSelector::renderAOgre() {
    RenderAOgre app;
    app.initApp();
    app.getRoot()->startRendering();
    app.closeApp();
}

bool ExampleSelector::renderFourHeads() {
    try
    {
        RenderFourHeads app;
        app.initApp();
        app.getRoot()->startRendering();
        app.closeApp();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error occurred during execution: " << e.what() << '\n';
        return 1;
    }

    return 0;
}

bool ExampleSelector::renderANinja() {
    try
    {
        RenderANinja app;
        app.initApp();
        app.getRoot()->startRendering();
        app.closeApp();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error occurred during execution: " << e.what() << '\n';
        return 1;
    }

    return 0;
}