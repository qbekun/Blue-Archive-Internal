#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_CANBEACTIVATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_ONPANELACTIVATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_ONPANELDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IVisualElementPanelActivatable_TypeDefinitionIndex = 30258;

	class IVisualElementPanelActivatable : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* get_element()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_GET_ELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean CanBeActivated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_CANBEACTIVATED_OFFSET))(nullptr);
		}

		::System::Void OnPanelActivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_ONPANELACTIVATE_OFFSET))(nullptr);
		}

		::System::Void OnPanelDeactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTPANELACTIVATABLE_ONPANELDEACTIVATE_OFFSET))(nullptr);
		}

	};
}

