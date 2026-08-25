#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class InputDeviceCharacteristics; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDeviceCharacteristics_TypeDefinitionIndex = 37592;

	class InputDeviceCharacteristics : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::UnityEngine::XR::InputDeviceCharacteristics* None; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* HeadMounted; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* Camera; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* HeldInHand; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* HandTracking; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* EyeTracking; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* TrackedDevice; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* Controller; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* TrackingReference; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* Left; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* Right; // 0x0
		::UnityEngine::XR::InputDeviceCharacteristics* Simulated6DOF; // 0x0

	};
}

