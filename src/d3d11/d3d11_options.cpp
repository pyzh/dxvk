#include <unordered_map>

#include "d3d11_options.h"

namespace dxvk {
  
  D3D11Options::D3D11Options(const Config& config) {
    this->allowMapFlagNoWait    = config.getOption<bool>("d3d11.allowMapFlagNoWait",    false);
    this->dcMapSpeedHack        = config.getOption<bool>("d3d11.dcMapSpeedHack",        true);
    this->fakeStreamOutSupport  = config.getOption<bool>("d3d11.fakeStreamOutSupport",  false);
    this->maxTessFactor         = config.getOption<int32_t>("d3d11.maxTessFactor",      0);
    this->samplerAnisotropy     = config.getOption<int32_t>("d3d11.samplerAnisotropy",  -1);
    this->deferSurfaceCreation  = config.getOption<bool>("dxgi.deferSurfaceCreation",   false);
    this->numBackBuffers        = config.getOption<int32_t>("dxgi.numBackBuffers", 0);
    this->syncInterval          = config.getOption<int32_t>("dxgi.syncInterval", -1);
  }
  
}