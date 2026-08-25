#pragma once
#include "../unitysdk.h"

namespace FlatData { class DreamMakerVoiceCondition; }

namespace FlatData
{
	inline static constexpr unsigned int DreamMakerVoiceCondition_TypeDefinitionIndex = 9557;

	class DreamMakerVoiceCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DreamMakerVoiceCondition* None; // 0x0
		::FlatData::DreamMakerVoiceCondition* Fail; // 0x0
		::FlatData::DreamMakerVoiceCondition* Success; // 0x0
		::FlatData::DreamMakerVoiceCondition* Perfect; // 0x0
		::FlatData::DreamMakerVoiceCondition* DailyResult; // 0x0

	};
}

