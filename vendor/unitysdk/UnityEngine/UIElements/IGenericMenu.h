#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_IGENERICMENU_ADDITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IGENERICMENU_DROPDOWN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IGenericMenu_TypeDefinitionIndex = 30324;

	class IGenericMenu : public Il2CppObject
	{
	public:
		::System::Void AddItem(::System::String* str, ::System::Boolean arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGENERICMENU_ADDITEM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void DropDown(::UnityEngine::Rect* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGENERICMENU_DROPDOWN_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

