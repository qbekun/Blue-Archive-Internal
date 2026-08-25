#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E1000)
#define UNITYENGINE_UIELEMENTS_BLUREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1080)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BlurEvent_TypeDefinitionIndex = 30475;

	class BlurEvent : public ::MX::Logic::BattleEntities::EquipmentProcessor
	{
	public:
		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

