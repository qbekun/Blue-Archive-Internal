#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class InputTrackingState; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTrackingState_TypeDefinitionIndex = 37593;

	class InputTrackingState : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::UnityEngine::XR::InputTrackingState* None; // 0x0
		::UnityEngine::XR::InputTrackingState* Position; // 0x0
		::UnityEngine::XR::InputTrackingState* Rotation; // 0x0
		::UnityEngine::XR::InputTrackingState* Velocity; // 0x0
		::UnityEngine::XR::InputTrackingState* AngularVelocity; // 0x0
		::UnityEngine::XR::InputTrackingState* Acceleration; // 0x0
		::UnityEngine::XR::InputTrackingState* AngularAcceleration; // 0x0
		::UnityEngine::XR::InputTrackingState* All; // 0x0

	};
}

