#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class InputFeatureType; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputFeatureType_TypeDefinitionIndex = 37590;

	class InputFeatureType : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::UnityEngine::XR::InputFeatureType* Custom; // 0x0
		::UnityEngine::XR::InputFeatureType* Binary; // 0x0
		::UnityEngine::XR::InputFeatureType* DiscreteStates; // 0x0
		::UnityEngine::XR::InputFeatureType* Axis1D; // 0x0
		::UnityEngine::XR::InputFeatureType* Axis2D; // 0x0
		::UnityEngine::XR::InputFeatureType* Axis3D; // 0x0
		::UnityEngine::XR::InputFeatureType* Rotation; // 0x0
		::UnityEngine::XR::InputFeatureType* Hand; // 0x0
		::UnityEngine::XR::InputFeatureType* Bone; // 0x0
		::UnityEngine::XR::InputFeatureType* Eyes; // 0x0
		::UnityEngine::XR::InputFeatureType* kUnityXRInputFeatureTypeInvalid; // 0x0

	};
}

