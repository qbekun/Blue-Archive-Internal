#pragma once
#include "../unitysdk.h"

namespace FlatData { class BattlePassContentType; }

namespace FlatData
{
	inline static constexpr unsigned int BattlePassContentType_TypeDefinitionIndex = 9487;

	class BattlePassContentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BattlePassContentType* Lobby; // 0x0
		::FlatData::BattlePassContentType* Mission; // 0x0

	};
}

