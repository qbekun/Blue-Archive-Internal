#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;

#define INTERACTIVEWORLDRAIDCONDITIONISEMOJIPLAYING_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F980)
#define INTERACTIVEWORLDRAIDCONDITIONISEMOJIPLAYING_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FB40)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsEmojiPlaying_TypeDefinitionIndex = 314;

	class InteractiveWorldRaidConditionIsEmojiPlaying : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCharacter* character; // 0x20

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISEMOJIPLAYING_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISEMOJIPLAYING_.CTOR_OFFSET))(nullptr);
		}

	};

