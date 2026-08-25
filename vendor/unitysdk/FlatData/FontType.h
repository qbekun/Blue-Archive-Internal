#pragma once
#include "../unitysdk.h"

namespace FlatData { class FontType; }

namespace FlatData
{
	inline static constexpr unsigned int FontType_TypeDefinitionIndex = 9367;

	class FontType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FontType* None; // 0x0
		::FlatData::FontType* Damage; // 0x0
		::FlatData::FontType* Block; // 0x0
		::FlatData::FontType* Heal; // 0x0
		::FlatData::FontType* Miss; // 0x0
		::FlatData::FontType* Critical; // 0x0
		::FlatData::FontType* Skill; // 0x0
		::FlatData::FontType* Immune; // 0x0
		::FlatData::FontType* DamageResist; // 0x0
		::FlatData::FontType* DamageWeak; // 0x0
		::FlatData::FontType* CriticalResist; // 0x0
		::FlatData::FontType* CriticalWeak; // 0x0
		::FlatData::FontType* Effective; // 0x0
		::FlatData::FontType* CriticalEffective; // 0x0
		::FlatData::FontType* ShieldHeal; // 0x0

	};
}

