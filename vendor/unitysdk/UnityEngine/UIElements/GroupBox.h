#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Label; }

#define UNITYENGINE_UIELEMENTS_GROUPBOX_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA3A6460)
#define UNITYENGINE_UIELEMENTS_GROUPBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A65B0)
#define UNITYENGINE_UIELEMENTS_GROUPBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A6620)
#define UNITYENGINE_UIELEMENTS_GROUPBOX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A66A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GroupBox_TypeDefinitionIndex = 30330;

	class GroupBox : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::UnityEngine::UIElements::Label* m_TitleLabel; // 0x3C0

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOX_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOX_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

