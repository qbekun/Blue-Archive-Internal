#pragma once
#include "../unitysdk.h"

namespace FlatData { class TBGItemEffectType; }

namespace FlatData
{
	inline static constexpr unsigned int TBGItemEffectType_TypeDefinitionIndex = 9567;

	class TBGItemEffectType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TBGItemEffectType* None; // 0x0
		::FlatData::TBGItemEffectType* PermanentContinuity; // 0x0
		::FlatData::TBGItemEffectType* TemporaryContinuation; // 0x0
		::FlatData::TBGItemEffectType* Immediately; // 0x0

	};
}

