#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_IRUNTIMEPANELCOMPONENT_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IRuntimePanelComponent_TypeDefinitionIndex = 30142;

	class IRuntimePanelComponent : public Il2CppObject
	{
	public:
		::System::Void set_panel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IRUNTIMEPANELCOMPONENT_SET_PANEL_OFFSET))(arg, nullptr);
		}

	};
}

