// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "carla/MsgPack.h"

#ifdef LIBCARLA_INCLUDED_FROM_UE4
#  include "Carla/Vehicle/VehicleWheelState.h"
#endif // LIBCARLA_INCLUDED_FROM_UE4

namespace carla {
namespace rpc {

  class VehicleWheelState {
  public:

    VehicleWheelState() = default;

    VehicleWheelState(
        float in_rotation_fl,
        float in_rotation_fr,
        float in_rotation_bl,
        float in_rotation_br)
      : rotation_fl(in_rotation_fl),
        rotation_fr(in_rotation_fr),
        rotation_bl(in_rotation_bl),
        rotation_br(in_rotation_br) {}


    float rotation_fl = 0.0f;
    float rotation_fr = 0.0f;
    float rotation_bl = 0.0f;
    float rotation_br = 0.0f;

    bool operator!=(const VehicleWheelState &rhs) const {
      return
          rotation_fl != rhs.rotation_fl ||
          rotation_fr != rhs.rotation_fr ||
          rotation_bl != rhs.rotation_bl ||
          rotation_br != rhs.rotation_br;
    }


#ifdef LIBCARLA_INCLUDED_FROM_UE4

    VehicleWheelState(const FVehicleWheelState &state)
      : rotation_fl(state.RotationFL),
        rotation_fr(state.RotationFR),
        rotation_bl(state.RotationBL),
        rotation_br(state.RotationBR) {}

    operator FVehicleWheelState() const {
      FVehicleWheelState state;
      state.RotationFL = rotation_fl;
      state.RotationFR = rotation_fr;
      state.RotationBL = rotation_bl;
      state.RotationBR = rotation_br;
      return state;
    }

#endif // LIBCARLA_INCLUDED_FROM_UE4
    bool operator==(const VehicleWheelState &rhs) const {
      return !(*this != rhs);
    }

    MSGPACK_DEFINE_ARRAY(
        rotation_fl,
        rotation_fr,
        rotation_bl,
        rotation_br);
  };

} // namespace rpc
} // namespace carla
