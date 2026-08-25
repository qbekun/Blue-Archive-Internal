#pragma once
#include "../unitysdk.h"

namespace FlatData { class ClanJoinOption; }

namespace FlatData
{
	inline static constexpr unsigned int ClanJoinOption_TypeDefinitionIndex = 9438;

	class ClanJoinOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ClanJoinOption* Free; // 0x0
		::FlatData::ClanJoinOption* Permission; // 0x0
		::FlatData::ClanJoinOption* All; // 0x0

	};
}

