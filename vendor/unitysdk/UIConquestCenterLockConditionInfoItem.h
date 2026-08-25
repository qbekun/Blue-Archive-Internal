#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class EventDelegate;

#define UICONQUESTCENTERLOCKCONDITIONINFOITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2364020)
#define UICONQUESTCENTERLOCKCONDITIONINFOITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23641A0)

	inline static constexpr unsigned int UIConquestCenterLockConditionInfoItem_TypeDefinitionIndex = 5051;

	class UIConquestCenterLockConditionInfoItem : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* lockRoot; // 0x18
		UILabel* lockConditionLabel; // 0x20
		UILabel* openConditionLabel; // 0x28
		MXButton* infoDetailButton; // 0x30
		::UnityEngine::GameObject* openRoot; // 0x38

		::System::Void SetData(::System::Boolean arg, ::System::String* str, EventDelegate* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKCONDITIONINFOITEM_SETDATA_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTCENTERLOCKCONDITIONINFOITEM_.CTOR_OFFSET))(nullptr);
		}

	};

