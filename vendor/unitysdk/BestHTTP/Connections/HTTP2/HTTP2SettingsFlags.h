#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2SettingsFlags_TypeDefinitionIndex = 23443;

	class HTTP2SettingsFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2SettingsFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2SettingsFlags* ACK; // 0x0

	};
}

