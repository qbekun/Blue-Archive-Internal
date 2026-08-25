#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;

#define INTERACTIVEWORLDRAIDCONDITIONISDIALOGPLAYING_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F7B0)
#define INTERACTIVEWORLDRAIDCONDITIONISDIALOGPLAYING_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F970)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsDialogPlaying_TypeDefinitionIndex = 313;

	class InteractiveWorldRaidConditionIsDialogPlaying : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCharacter* character; // 0x20

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISDIALOGPLAYING_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISDIALOGPLAYING_.CTOR_OFFSET))(nullptr);
		}

	};

