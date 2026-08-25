#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class AvailableTrackingData; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int AvailableTrackingData_TypeDefinitionIndex = 37588;

	class AvailableTrackingData : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::XR::AvailableTrackingData* None; // 0x0
		::UnityEngine::XR::AvailableTrackingData* PositionAvailable; // 0x0
		::UnityEngine::XR::AvailableTrackingData* RotationAvailable; // 0x0
		::UnityEngine::XR::AvailableTrackingData* VelocityAvailable; // 0x0
		::UnityEngine::XR::AvailableTrackingData* AngularVelocityAvailable; // 0x0
		::UnityEngine::XR::AvailableTrackingData* AccelerationAvailable; // 0x0
		::UnityEngine::XR::AvailableTrackingData* AngularAccelerationAvailable; // 0x0

	};
}

