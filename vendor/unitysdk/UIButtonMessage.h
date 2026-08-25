#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class Trigger;

#define UIBUTTONMESSAGE_START_OFFSET UNITYSDK_OFFSET(0x9FA200)
#define UIBUTTONMESSAGE_ONHOVER_OFFSET UNITYSDK_OFFSET(0x9FA210)
#define UIBUTTONMESSAGE_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0x9FA3E0)
#define UIBUTTONMESSAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA410)
#define UIBUTTONMESSAGE_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FA4A0)
#define UIBUTTONMESSAGE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9FA4E0)
#define UIBUTTONMESSAGE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9FA590)
#define UIBUTTONMESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0x9FA250)
#define UIBUTTONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA5C0)

	inline static constexpr unsigned int UIButtonMessage_TypeDefinitionIndex = 22;

	class UIButtonMessage : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x18
		::System::String* functionName; // 0x20
		Trigger* trigger; // 0x28
		::System::Boolean includeChildren; // 0x2C
		::System::Boolean mStarted; // 0x2D

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_START_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void Send()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

