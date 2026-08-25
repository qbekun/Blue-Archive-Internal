#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::UI { class Text; }

#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x957B570)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x957B8F0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x957B910)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x957BEE0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x957C1F0)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x957C520)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x957C710)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x957C720)
#define RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x957C760)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int Vector4Field_TypeDefinitionIndex = 35678;

	class Vector4Field : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundInputField* inputX; // 0x78
		::RuntimeInspectorNamespace::BoundInputField* inputY; // 0x80
		::RuntimeInspectorNamespace::BoundInputField* inputZ; // 0x88
		::RuntimeInspectorNamespace::BoundInputField* inputW; // 0x90
		::UnityEngine::UI::Text* labelX; // 0x98
		::UnityEngine::UI::Text* labelY; // 0xA0
		::UnityEngine::UI::Text* labelZ; // 0xA8
		::UnityEngine::UI::Text* labelW; // 0xB0
		::System::Boolean isQuaternion; // 0xB8

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VECTOR4FIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

	};
}

