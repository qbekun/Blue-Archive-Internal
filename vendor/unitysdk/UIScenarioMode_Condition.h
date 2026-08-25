#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UISCENARIOMODE_CONDITION_GET_OPENED_OFFSET UNITYSDK_OFFSET(0x27F4ED0)
#define UISCENARIOMODE_CONDITION_SETTEXT_OFFSET UNITYSDK_OFFSET(0x27F4F90)
#define UISCENARIOMODE_CONDITION_GET_LOCKOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x27F5250)
#define UISCENARIOMODE_CONDITION_GET_LABELS_OFFSET UNITYSDK_OFFSET(0x27F50E0)
#define UISCENARIOMODE_CONDITION_GET_OPENOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x27F5280)
#define UISCENARIOMODE_CONDITION_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x27F5190)
#define UISCENARIOMODE_CONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F52B0)

	inline static constexpr unsigned int UIScenarioMode_Condition_TypeDefinitionIndex = 7734;

	class UIScenarioMode_Condition : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* opened; // 0x18
		::UnityEngine::GameObject* locked; // 0x20
		Il2CppObject* labels; // 0x28

		::UnityEngine::GameObject* get_Opened()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_GET_OPENED_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_SETTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_LockObjectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_GET_LOCKOBJECTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Labels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_GET_LABELS_OFFSET))(nullptr);
		}

		::System::String* get_OpenObjectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_GET_OPENOBJECTPATH_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Locked()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CONDITION_.CTOR_OFFSET))(nullptr);
		}

	};

