#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class PointerEventListener; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956A890)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956A8A0)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0x956A970)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956AA70)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_SHOWCOLORPICKER_OFFSET UNITYSDK_OFFSET(0x956AB30)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x956ACD0)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956AD60)
#define RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956AE80)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ColorField_TypeDefinitionIndex = 35650;

	class ColorField : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* colorPickerArea; // 0x78
		::RuntimeInspectorNamespace::PointerEventListener* inputColor; // 0x80
		::UnityEngine::UI::Image* colorImg; // 0x88
		::System::Boolean isColor32; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnColorChanged(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONCOLORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowColorPicker(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_SHOWCOLORPICKER_OFFSET))(arg, nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

	};
}

