#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_SET_CHOICES_OFFSET UNITYSDK_OFFSET(0xA3B32B0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B3B00)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B3B10)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_RADIOBUTTONVALUECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3B3CC0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3B3DB0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_UPDATERADIOBUTTONS_OFFSET UNITYSDK_OFFSET(0xA3B38D0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B3E00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RadioButtonGroup_TypeDefinitionIndex = 30364;

	class RadioButtonGroup : public ::MXUnderCover::UCRuntimeObject
	{
	public:
		::System::String* ussClassName; // 0x0
		Il2CppObject* m_Choices; // 0x408
		Il2CppObject* m_RadioButtons; // 0x410
		Il2CppObject* m_RadioButtonValueChangedCallback; // 0x418

		::System::Void set_choices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_SET_CHOICES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void RadioButtonValueChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_RADIOBUTTONVALUECHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRadioButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_UPDATERADIOBUTTONS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTONGROUP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

