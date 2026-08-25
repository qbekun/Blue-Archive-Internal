#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestTeamType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestTeamType_TypeDefinitionIndex = 9442;

	class ConquestTeamType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestTeamType* None; // 0x0
		::FlatData::ConquestTeamType* Team1; // 0x0
		::FlatData::ConquestTeamType* Team2; // 0x0
		::FlatData::ConquestTeamType* Team3; // 0x0

	};
}

