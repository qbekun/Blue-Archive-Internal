#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class ConditionPayload;

#define UIMESSAGEPOPUPCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BF20)
#define UIMESSAGEPOPUPCONDITION_SET_OFFSET UNITYSDK_OFFSET(0x277AC50)
#define UIMESSAGEPOPUPCONDITION_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x277BF30)

	inline static constexpr unsigned int UIMessagePopupCondition_TypeDefinitionIndex = 7363;

	class UIMessagePopupCondition : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* root; // 0x10
		::UnityEngine::GameObject* unlockRoot; // 0x18
		UILabel* unlockLabel; // 0x20
		::UnityEngine::GameObject* lockRoot; // 0x28
		UILabel* lockLabel; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ConditionPayload* arg)
		{
			((::System::Void(*)(::System::String*, ConditionPayload*, ::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPCONDITION_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPCONDITION_SETACTIVE_OFFSET))(arg, nullptr);
		}

	};

