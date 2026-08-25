#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkSupportState; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkSupportState_TypeDefinitionIndex = 25924;

	class NexonLinkSupportState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::InfaceSDK::Component::NexonLinkSupportState* NLSS_Invalid; // 0x0
		::NPA::InfaceSDK::Component::NexonLinkSupportState* NLSS_NotSupported; // 0x0
		::NPA::InfaceSDK::Component::NexonLinkSupportState* NLSS_Supported; // 0x0

	};
}

