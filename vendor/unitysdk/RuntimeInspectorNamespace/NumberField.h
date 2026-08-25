#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace RuntimeInspectorNamespace { class INumberHandler; }

#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9572F20)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95737A0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9573BD0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9573EB0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x95741D0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9574220)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9574300)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9574320)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9574470)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int NumberField_TypeDefinitionIndex = 35666;

	class NumberField : public Il2CppObject
	{
	public:
		Il2CppObject* supportedTypes; // 0x0
		::RuntimeInspectorNamespace::BoundInputField* input; // 0x78
		::RuntimeInspectorNamespace::INumberHandler* numberHandler; // 0x80

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

	};
}

