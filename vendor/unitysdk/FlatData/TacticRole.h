#pragma once
#include "../unitysdk.h"

namespace FlatData { class TacticRole; }

namespace FlatData
{
	inline static constexpr unsigned int TacticRole_TypeDefinitionIndex = 9430;

	class TacticRole : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TacticRole* None; // 0x0
		::FlatData::TacticRole* DamageDealer; // 0x0
		::FlatData::TacticRole* Tanker; // 0x0
		::FlatData::TacticRole* Supporter; // 0x0
		::FlatData::TacticRole* Healer; // 0x0
		::FlatData::TacticRole* Vehicle; // 0x0

	};
}

