#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define UIDICERACEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D6CB0)
#define UIDICERACEEVENT_SHOWEVENTPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23D6CC0)

	inline static constexpr unsigned int UIDiceRaceEvent_TypeDefinitionIndex = 5333;

	class UIDiceRaceEvent : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* eventAnimation; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowEventProduction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEEVENT_SHOWEVENTPRODUCTION_OFFSET))(arg, nullptr);
		}

	};

