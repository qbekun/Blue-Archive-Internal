#pragma once
#include "../unitysdk.h"

namespace FlatData { class AttackType; }

namespace FlatData
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 9361;

	class AttackType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AttackType* Single; // 0x0
		::FlatData::AttackType* Splash; // 0x0
		::FlatData::AttackType* Through; // 0x0
		::FlatData::AttackType* Heal; // 0x0

	};
}

