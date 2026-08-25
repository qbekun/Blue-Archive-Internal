#pragma once
#include "unitysdk.h"

class ScenarioType;

#define UIROADPUZZLESCENARIOHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C9D80)
#define UIROADPUZZLESCENARIOHANDLER_PLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0x27C8A80)
#define UIROADPUZZLESCENARIOHANDLER_HASTOPLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0x27C88A0)

	inline static constexpr unsigned int UIRoadPuzzleScenarioHandler_TypeDefinitionIndex = 7589;

	class UIRoadPuzzleScenarioHandler : public Il2CppObject
	{
	public:
		::System::Boolean IsPlayingScenario; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLESCENARIOHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayScenario(ScenarioType* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLESCENARIOHANDLER_PLAYSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasToPlayScenario(ScenarioType* arg)
		{
			return ((::System::Boolean(*)(ScenarioType*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLESCENARIOHANDLER_HASTOPLAYSCENARIO_OFFSET))(arg, nullptr);
		}

	};

