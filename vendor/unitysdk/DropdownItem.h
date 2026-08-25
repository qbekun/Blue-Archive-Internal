#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define DROPDOWNITEM_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA2F69B0)
#define DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2F69C0)
#define DROPDOWNITEM_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA2F69D0)
#define DROPDOWNITEM_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA2F69E0)
#define DROPDOWNITEM_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2F69F0)
#define DROPDOWNITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F6A00)
#define DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2F6A10)
#define DROPDOWNITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2F6A20)
#define DROPDOWNITEM_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA2F6A30)
#define DROPDOWNITEM_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA2F6A40)
#define DROPDOWNITEM_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xA2F6AD0)

	inline static constexpr unsigned int DropdownItem_TypeDefinitionIndex = 34758;

	class DropdownItem : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* m_Text; // 0x18
		::UnityEngine::UI::Image* m_Image; // 0x20
		::UnityEngine::RectTransform* m_RectTransform; // 0x28
		::UnityEngine::UI::Toggle* m_Toggle; // 0x30

		::UnityEngine::UI::Image* get_image()
		{
			return (return (::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_GET_IMAGE_OFFSET))(nullptr);
		}

		::System::Void set_rectTransform(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Toggle* get_toggle()
		{
			return (return (::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_GET_TOGGLE_OFFSET))(nullptr);
		}

		::System::Void set_image(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_SET_IMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_text(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_SET_TEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Text* get_text()
		{
			return (return (::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_toggle(::UnityEngine::UI::Toggle* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Toggle*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_SET_TOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNITEM_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

	};

