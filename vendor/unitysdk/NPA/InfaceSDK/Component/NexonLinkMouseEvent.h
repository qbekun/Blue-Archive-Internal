#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkMouseData; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkMouseEvent_TypeDefinitionIndex = 25939;

	class NexonLinkMouseEvent : public Il2CppObject
	{
	public:
		::System::Int32 action; // 0x10
		::System::Int32 button; // 0x14
		::NPA::InfaceSDK::Component::NexonLinkMouseData* data; // 0x18

	};
}

