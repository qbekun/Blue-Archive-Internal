#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class BoundInputField; }

#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_GET_SETTERMODE_OFFSET UNITYSDK_OFFSET(0x9578C10)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9578C20)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9578C50)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9578C70)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9578E30)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONVALUESUBMITTED_OFFSET UNITYSDK_OFFSET(0x9578F00)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_SET_SETTERMODE_OFFSET UNITYSDK_OFFSET(0x956D900)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9578F40)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9578FD0)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9579040)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9579200)
#define RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONUNBOUND_OFFSET UNITYSDK_OFFSET(0x9579210)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int StringField_TypeDefinitionIndex = 35673;

	class StringField : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::BoundInputField* input; // 0x78
		Mode* m_setterMode; // 0x80
		::System::Int32 lineCount; // 0x84

		Mode* get_SetterMode()
		{
			return (return (Mode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_GET_SETTERMODE_OFFSET))(nullptr);
		}

		::System::Boolean OnValueChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean OnValueSubmitted(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONVALUESUBMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_SetterMode(Mode* arg)
		{
			((::System::Void(*)(Mode*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_SET_SETTERMODE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void OnUnbound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_STRINGFIELD_ONUNBOUND_OFFSET))(nullptr);
		}

	};
}

