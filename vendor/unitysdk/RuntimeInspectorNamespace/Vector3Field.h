#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::UI { class Text; }

#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x957A420)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x957A440)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x957A500)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x957A8B0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x957AB80)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x957ABC0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x957AE60)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x957B100)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int Vector3Field_TypeDefinitionIndex = 35677;

	class Vector3Field : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundInputField* inputX; // 0x78
		::RuntimeInspectorNamespace::BoundInputField* inputY; // 0x80
		::RuntimeInspectorNamespace::BoundInputField* inputZ; // 0x88
		::UnityEngine::UI::Text* labelX; // 0x90
		::UnityEngine::UI::Text* labelY; // 0x98
		::UnityEngine::UI::Text* labelZ; // 0xA0
		::System::Boolean isVector3Int; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR3FIELD_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

