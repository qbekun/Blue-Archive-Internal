#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConcentrationVoiceCondition; }

#define BOARDGAME_CONCENTRATION_PLAYVOICE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0xE0B890)
#define BOARDGAME_CONCENTRATION_PLAYVOICE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xE0B8A0)
#define BOARDGAME_CONCENTRATION_PLAYVOICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B8B0)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_PlayVoice_TypeDefinitionIndex = 10275;

	class Concentration_PlayVoice : public Il2CppObject
	{
	public:
		::FlatData::ConcentrationVoiceCondition* _Condition_k__BackingField; // 0x38

		::System::Void set_Condition(::FlatData::ConcentrationVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::ConcentrationVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_PLAYVOICE_SET_CONDITION_OFFSET))(arg, nullptr);
		}

		::FlatData::ConcentrationVoiceCondition* get_Condition()
		{
			return ((::FlatData::ConcentrationVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_PLAYVOICE_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ConcentrationVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::ConcentrationVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_PLAYVOICE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

