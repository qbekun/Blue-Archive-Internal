#pragma once
#include "unitysdk.h"

#define MINIGAMECONDITIONGAMESTART_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD13540)
#define MINIGAMECONDITIONGAMESTART_.CTOR_OFFSET UNITYSDK_OFFSET(0xD135D0)

	inline static constexpr unsigned int MinigameConditionGameStart_TypeDefinitionIndex = 645;

	class MinigameConditionGameStart : public Il2CppObject
	{
	public:
		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONGAMESTART_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECONDITIONGAMESTART_.CTOR_OFFSET))(nullptr);
		}

	};

