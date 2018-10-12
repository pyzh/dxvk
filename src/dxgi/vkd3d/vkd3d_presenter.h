#pragma once

#include "vkd3d_loader.h"

#include "../../util/rc/util_rc.h"

namespace dxvk {

  /**
   * \brief vkd3d presenter
   */
  class VkD3DPresenter : public RcObject {

  public:

    VkD3DPresenter();
    ~VkD3DPresenter();

  private:

    VkD3DLoader m_vkd3d;



  };

}