#pragma once
#include "../unitysdk.h"

namespace FlatData { class TacticRange; }

namespace FlatData
{
	inline static constexpr unsigned int TacticRange_TypeDefinitionIndex = 9431;

	class TacticRange : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TacticRange* Back; // 0x0
		::FlatData::TacticRange* Front; // 0x0
		::FlatData::TacticRange* Middle; // 0x0

	};
}

