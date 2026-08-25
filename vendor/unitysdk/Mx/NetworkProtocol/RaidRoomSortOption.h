#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class RaidRoomSortOption; }

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRoomSortOption_TypeDefinitionIndex = 12012;

	class RaidRoomSortOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::NetworkProtocol::RaidRoomSortOption* HPHigh; // 0x0
		::MX::NetworkProtocol::RaidRoomSortOption* HPLow; // 0x0
		::MX::NetworkProtocol::RaidRoomSortOption* RemainTimeHigh; // 0x0
		::MX::NetworkProtocol::RaidRoomSortOption* RemainTimeLow; // 0x0

	};
}

