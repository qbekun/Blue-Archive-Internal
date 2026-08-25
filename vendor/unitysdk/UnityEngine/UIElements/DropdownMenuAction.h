#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DropdownMenuEventInfo; }

#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA314A30)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0xA314A40)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0xA314A50)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA314A60)
#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_UPDATEACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0xA314AE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownMenuAction_TypeDefinitionIndex = 30088;

	class DropdownMenuAction : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x10
		Status* _status_k__BackingField; // 0x18
		::UnityEngine::UIElements::DropdownMenuEventInfo* _eventInfo_k__BackingField; // 0x20
		::System::Object* _userData_k__BackingField; // 0x28
		Il2CppObject* actionCallback; // 0x30
		Il2CppObject* actionStatusCallback; // 0x38

		::System::Void set_status(Status* arg)
		{
			((::System::Void(*)(Status*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenuEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_EVENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_userData(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_SET_USERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenuEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUACTION_UPDATEACTIONSTATUS_OFFSET))(arg, nullptr);
		}

	};
}

