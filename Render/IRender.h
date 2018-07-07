#include "renderOpenGL.h"
#include "renderDirectX.h"
#include <memory>
#include "config.h"


struct IRender : RenderOpengGL, RenderDirectX
{
    virtual void render_loop() = 0;
};


std::unique_ptr<IRender> RenderFactory(const CONFIG::cRender &config) {
    
    
    if (config.rendererChoice == CONFIG::eRenderer::OPENGL) {
        /* cod
    }
    else {
        /* code */
    }
    
    
}