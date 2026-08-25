#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkConnectionState; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkConnectionState_TypeDefinitionIndex = 25923;

	class NexonLinkConnectionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::InfaceSDK::Component::NexonLinkConnectionState* NLCS_Invalid; // 0x0
		::NPA::InfaceSDK::Component::NexonLinkConnectionState* NLCS_Disconnected; // 0x0
		::NPA::InfaceSDK::Component::NexonLinkConnectionState* NLCS_Connected; // 0x0

	};
}

