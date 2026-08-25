#pragma once
#include "../unitysdk.h"

namespace FlatData { class StatTransType; }

namespace FlatData
{
	inline static constexpr unsigned int StatTransType_TypeDefinitionIndex = 9417;

	class StatTransType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StatTransType* SpecialTransStat; // 0x0
		::FlatData::StatTransType* TSATransStat; // 0x0

	};
}

