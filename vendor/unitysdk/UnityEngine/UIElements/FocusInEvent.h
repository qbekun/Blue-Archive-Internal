#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E10C0)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E1100)
#define UNITYENGINE_UIELEMENTS_FOCUSINEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1110)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusInEvent_TypeDefinitionIndex = 30476;

	class FocusInEvent : public ::MX::Logic::BattleEntities::HallucinationCharacter
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSINEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

