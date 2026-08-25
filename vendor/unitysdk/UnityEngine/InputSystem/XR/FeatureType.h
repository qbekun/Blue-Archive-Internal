#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::XR { class FeatureType; }

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int FeatureType_TypeDefinitionIndex = 28582;

	class FeatureType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::XR::FeatureType* Custom; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Binary; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* DiscreteStates; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Axis1D; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Axis2D; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Axis3D; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Rotation; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Hand; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Bone; // 0x0
		::UnityEngine::InputSystem::XR::FeatureType* Eyes; // 0x0

	};
}

