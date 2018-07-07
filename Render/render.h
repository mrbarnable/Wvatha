#ifndef RENDER_H
#define RENDER_H
#include "IRender.h"


template <typename T>
class Renderer : IRender {

    void MainLoop() final {
        mRenderManager.render_loop();
    }

    T mRenderManager;
};

#endif