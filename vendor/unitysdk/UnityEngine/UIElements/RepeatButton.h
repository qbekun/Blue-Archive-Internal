#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Clickable; }

#define UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B4080)
#define UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B4110)
#define UNITYENGINE_UIELEMENTS_REPEATBUTTON_SETACTION_OFFSET UNITYSDK_OFFSET(0xA3B4150)
#define UNITYENGINE_UIELEMENTS_REPEATBUTTON_ADDACTION_OFFSET UNITYSDK_OFFSET(0xA3B4210)
#define UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B4240)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RepeatButton_TypeDefinitionIndex = 30367;

	class RepeatButton : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Clickable* m_Clickable; // 0x478
		::System::String* ussClassName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetAction(::System::Action* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPEATBUTTON_SETACTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPEATBUTTON_ADDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REPEATBUTTON_.CCTOR_OFFSET))(nullptr);
		}

	};
}

