#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C2660)
#define UNITYENGINE_UIELEMENTS_TOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C2670)
#define UNITYENGINE_UIELEMENTS_TOGGLE_INITLABEL_OFFSET UNITYSDK_OFFSET(0xA3C2780)
#define UNITYENGINE_UIELEMENTS_TOGGLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C2800)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Toggle_TypeDefinitionIndex = 30399;

	class Toggle : public ::TriInspector::HideReferencePickerAttribute
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10
		::System::String* noTextVariantUssClassName; // 0x18
		::System::String* checkmarkUssClassName; // 0x20
		::System::String* textUssClassName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOGGLE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void InitLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOGGLE_INITLABEL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOGGLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

