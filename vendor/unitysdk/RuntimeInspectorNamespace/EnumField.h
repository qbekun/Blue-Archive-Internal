#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Dropdown; }

#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x956AEF0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956B040)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956B0C0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956B0F0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956B610)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x956B6C0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956B7C0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x956B7D0)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONINSPECTORCHANGED_OFFSET UNITYSDK_OFFSET(0x956B840)
#define RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x956B860)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int EnumField_TypeDefinitionIndex = 35651;

	class EnumField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Image* background; // 0x78
		::UnityEngine::UI::Image* dropdownArrow; // 0x80
		::UnityEngine::RectTransform* templateRoot; // 0x88
		::UnityEngine::RectTransform* templateContentTransform; // 0x90
		::UnityEngine::RectTransform* templateItemTransform; // 0x98
		::UnityEngine::UI::Image* templateBackground; // 0xA0
		::UnityEngine::UI::Image* templateCheckmark; // 0xA8
		::UnityEngine::UI::Text* templateText; // 0xB0
		::UnityEngine::UI::Dropdown* input; // 0xB8
		Il2CppObject* enumNames; // 0x0
		Il2CppObject* enumValues; // 0x8
		Il2CppObject* currEnumNames; // 0xC0
		Il2CppObject* currEnumValues; // 0xC8

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValueChanged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnInspectorChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONINSPECTORCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ENUMFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

	};
}

