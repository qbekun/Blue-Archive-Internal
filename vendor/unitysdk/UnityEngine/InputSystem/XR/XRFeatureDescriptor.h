#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::XR { class FeatureType; }

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRFeatureDescriptor_TypeDefinitionIndex = 28584;

	class XRFeatureDescriptor : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* usageHints; // 0x18
		::UnityEngine::InputSystem::XR::FeatureType* featureType; // 0x20
		::System::UInt32 customSize; // 0x24

	};
}

