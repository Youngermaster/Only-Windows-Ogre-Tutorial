#include "ExampleSelector.h"

ExampleSelector::ExampleSelector() {

}

void ExampleSelector::selectExample(int index) {
    switch (index)
    {
    case 1:
        renderAOgre();
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