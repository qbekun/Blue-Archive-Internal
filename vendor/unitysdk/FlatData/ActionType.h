#pragma once
#include "../unitysdk.h"

namespace FlatData { class ActionType; }

namespace FlatData
{
	inline static constexpr unsigned int ActionType_TypeDefinitionIndex = 9370;

	class ActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ActionType* Crush; // 0x0
		::FlatData::ActionType* Courage; // 0x0
		::FlatData::ActionType* Tactic; // 0x0

	};
}

