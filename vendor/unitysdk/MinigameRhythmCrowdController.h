#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define MINIGAMERHYTHMCROWDCONTROLLER_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD16AB0)
#define MINIGAMERHYTHMCROWDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD16B70)
#define MINIGAMERHYTHMCROWDCONTROLLER_SWITCHCROWDSTATE_OFFSET UNITYSDK_OFFSET(0xD16C30)
#define MINIGAMERHYTHMCROWDCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16C70)

	inline static constexpr unsigned int MinigameRhythmCrowdController_TypeDefinitionIndex = 667;

	class MinigameRhythmCrowdController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CHR_Idle; // 0x18
		::UnityEngine::GameObject* CHR_Fever; // 0x20

		::System::Void UnsubscribeEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCROWDCONTROLLER_UNSUBSCRIBEEVENT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCROWDCONTROLLER_START_OFFSET))(nullptr);
		}

		::System::Void SwitchCrowdState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCROWDCONTROLLER_SWITCHCROWDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCROWDCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

