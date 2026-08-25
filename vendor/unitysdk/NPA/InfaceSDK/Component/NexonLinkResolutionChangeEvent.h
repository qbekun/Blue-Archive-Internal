#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkScreenResolution; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkResolutionChangeEvent_TypeDefinitionIndex = 25944;

	class NexonLinkResolutionChangeEvent : public Il2CppObject
	{
	public:
		::NPA::InfaceSDK::Component::NexonLinkScreenResolution* resolution; // 0x10

	};
}

