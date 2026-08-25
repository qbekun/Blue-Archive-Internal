#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_FOCUSEVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E1150)
#define UNITYENGINE_UIELEMENTS_FOCUSEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E11F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusEvent_TypeDefinitionIndex = 30477;

	class FocusEvent : public ::MX::Logic::BattleEntities::FormConversionInfo
	{
	public:
		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENT_PREDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

