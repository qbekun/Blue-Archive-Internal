#pragma once
#include "../unitysdk.h"

namespace FlatData { class DamageAttribute; }

namespace FlatData
{
	inline static constexpr unsigned int DamageAttribute_TypeDefinitionIndex = 9399;

	class DamageAttribute : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DamageAttribute* Resist; // 0x0
		::FlatData::DamageAttribute* Normal; // 0x0
		::FlatData::DamageAttribute* Weak; // 0x0
		::FlatData::DamageAttribute* Effective; // 0x0

	};
}

