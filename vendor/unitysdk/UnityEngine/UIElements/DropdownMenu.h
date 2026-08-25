#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DropdownMenuEventInfo; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_DROPDOWNMENU_MENUITEMS_OFFSET UNITYSDK_OFFSET(0xA314B40)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENU_APPENDACTION_OFFSET UNITYSDK_OFFSET(0xA314B50)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENU_INSERTSEPARATOR_OFFSET UNITYSDK_OFFSET(0xA314C90)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENU_PREPAREFORDISPLAY_OFFSET UNITYSDK_OFFSET(0xA314DC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownMenu_TypeDefinitionIndex = 30089;

	class DropdownMenu : public Il2CppObject
	{
	public:
		Il2CppObject* m_MenuItems; // 0x10
		::UnityEngine::UIElements::DropdownMenuEventInfo* m_DropdownMenuEventInfo; // 0x18

		Il2CppObject* MenuItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENU_MENUITEMS_OFFSET))(nullptr);
		}

		::System::Void AppendAction(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENU_APPENDACTION_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void InsertSeparator(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENU_INSERTSEPARATOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void PrepareForDisplay(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENU_PREPAREFORDISPLAY_OFFSET))(arg, nullptr);
		}

	};
}

