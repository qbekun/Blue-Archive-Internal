#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::UI { class Text; }

#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x95796C0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9579980)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9579B90)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9579DB0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x9579FF0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x957A030)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x957A050)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x957A360)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int Vector2Field_TypeDefinitionIndex = 35676;

	class Vector2Field : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundInputField* inputX; // 0x78
		::RuntimeInspectorNamespace::BoundInputField* inputY; // 0x80
		::UnityEngine::UI::Text* labelX; // 0x88
		::UnityEngine::UI::Text* labelY; // 0x90
		::System::Boolean isVector2Int; // 0x98

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR2FIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

	};
}

