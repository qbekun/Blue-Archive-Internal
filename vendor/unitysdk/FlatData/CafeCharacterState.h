#pragma once
#include "../unitysdk.h"

namespace FlatData { class CafeCharacterState; }

namespace FlatData
{
	inline static constexpr unsigned int CafeCharacterState_TypeDefinitionIndex = 9509;

	class CafeCharacterState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CafeCharacterState* None; // 0x0
		::FlatData::CafeCharacterState* Idle; // 0x0
		::FlatData::CafeCharacterState* Walk; // 0x0
		::FlatData::CafeCharacterState* Reaction; // 0x0
		::FlatData::CafeCharacterState* Interaction; // 0x0
		::FlatData::CafeCharacterState* Max; // 0x0

	};
}

