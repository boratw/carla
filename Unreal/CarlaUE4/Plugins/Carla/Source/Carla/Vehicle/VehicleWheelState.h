// Copyright (c) 2020 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "VehicleWheelState.generated.h"

USTRUCT(BlueprintType)
struct CARLA_API FVehicleWheelState
{
  GENERATED_BODY()

  UPROPERTY(Category = "Vehicle Wheel", EditAnywhere, BlueprintReadWrite)
  float RotationFL = 0.0f;

  UPROPERTY(Category = "Vehicle Wheel", EditAnywhere, BlueprintReadWrite)
  float RotationFR = 0.0f;

  UPROPERTY(Category = "Vehicle Wheel", EditAnywhere, BlueprintReadWrite)
  float RotationBL = 0.0f;

  UPROPERTY(Category = "Vehicle Wheel", EditAnywhere, BlueprintReadWrite)
  float RotationBR = 0.0f;
};
