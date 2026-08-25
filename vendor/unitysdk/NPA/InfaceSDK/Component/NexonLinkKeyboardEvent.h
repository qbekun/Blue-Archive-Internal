#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkKeyboardStroke; }
namespace NPA::InfaceSDK::Component { class NexonLinkKeyboardChat; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkKeyboardEvent_TypeDefinitionIndex = 25942;

	class NexonLinkKeyboardEvent : public Il2CppObject
	{
	public:
		::System::Int32 eventType; // 0x10
		::NPA::InfaceSDK::Component::NexonLinkKeyboardStroke* stroke; // 0x14
		::NPA::InfaceSDK::Component::NexonLinkKeyboardChat* chat; // 0x28

	};
}

