#pragma once
#include "../unitysdk.h"

namespace FlatData { class BattleDialogType; }

namespace FlatData
{
	inline static constexpr unsigned int BattleDialogType_TypeDefinitionIndex = 9418;

	class BattleDialogType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BattleDialogType* Talk; // 0x0
		::FlatData::BattleDialogType* Think; // 0x0
		::FlatData::BattleDialogType* Shout; // 0x0

	};
}

