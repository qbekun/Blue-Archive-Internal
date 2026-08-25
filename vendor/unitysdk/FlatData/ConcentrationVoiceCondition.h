#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConcentrationVoiceCondition; }

namespace FlatData
{
	inline static constexpr unsigned int ConcentrationVoiceCondition_TypeDefinitionIndex = 9488;

	class ConcentrationVoiceCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConcentrationVoiceCondition* None; // 0x0
		::FlatData::ConcentrationVoiceCondition* PairMatchFail; // 0x0
		::FlatData::ConcentrationVoiceCondition* PairMatchSuccess; // 0x0
		::FlatData::ConcentrationVoiceCondition* RoundRenewal; // 0x0

	};
}

