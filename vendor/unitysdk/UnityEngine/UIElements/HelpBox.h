#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class HelpBoxMessageType; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Label; }

#define UNITYENGINE_UIELEMENTS_HELPBOX_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA3A6910)
#define UNITYENGINE_UIELEMENTS_HELPBOX_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xA3A6940)
#define UNITYENGINE_UIELEMENTS_HELPBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A6B10)
#define UNITYENGINE_UIELEMENTS_HELPBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A6B60)
#define UNITYENGINE_UIELEMENTS_HELPBOX_GETICONCLASS_OFFSET UNITYSDK_OFFSET(0xA3A6CF0)
#define UNITYENGINE_UIELEMENTS_HELPBOX_UPDATEICON_OFFSET UNITYSDK_OFFSET(0xA3A6960)
#define UNITYENGINE_UIELEMENTS_HELPBOX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A6DC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int HelpBox_TypeDefinitionIndex = 30334;

	class HelpBox : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* iconUssClassName; // 0x10
		::System::String* iconInfoUssClassName; // 0x18
		::System::String* iconwarningUssClassName; // 0x20
		::System::String* iconErrorUssClassName; // 0x28
		::UnityEngine::UIElements::HelpBoxMessageType* m_HelpBoxMessageType; // 0x3B0
		::UnityEngine::UIElements::VisualElement* m_Icon; // 0x3B8
		::System::String* m_IconClass; // 0x3C0
		::UnityEngine::UIElements::Label* m_Label; // 0x3C8

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_messageType(::UnityEngine::UIElements::HelpBoxMessageType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::HelpBoxMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_SET_MESSAGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::UIElements::HelpBoxMessageType* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UIElements::HelpBoxMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::HelpBoxMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_GETICONCLASS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::HelpBoxMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_UPDATEICON_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HELPBOX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

