#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E0F70)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E0FB0)
#define UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E0FC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusOutEvent_TypeDefinitionIndex = 30474;

	class FocusOutEvent : public ::MX::Logic::BattleEntities::IFormConversion
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSOUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

