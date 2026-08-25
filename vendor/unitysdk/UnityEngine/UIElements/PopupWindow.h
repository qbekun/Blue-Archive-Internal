#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_POPUPWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B16F0)
#define UNITYENGINE_UIELEMENTS_POPUPWINDOW_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA3B1830)
#define UNITYENGINE_UIELEMENTS_POPUPWINDOW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B1840)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PopupWindow_TypeDefinitionIndex = 30354;

	class PopupWindow : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_ContentContainer; // 0x478
		::System::String* ussClassName; // 0x0
		::System::String* contentUssClassName; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POPUPWINDOW_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POPUPWINDOW_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POPUPWINDOW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

