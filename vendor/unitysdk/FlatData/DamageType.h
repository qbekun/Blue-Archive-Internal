#pragma once
#include "../unitysdk.h"

namespace FlatData { class DamageType; }

namespace FlatData
{
	inline static constexpr unsigned int DamageType_TypeDefinitionIndex = 9379;

	class DamageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DamageType* Normal; // 0x0
		::FlatData::DamageType* Critical; // 0x0
		::FlatData::DamageType* IgnoreDefence; // 0x0

	};
}

