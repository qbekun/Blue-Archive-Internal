#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_VARIABLESET_INIT_OFFSET UNITYSDK_OFFSET(0x958E860)
#define RUNTIMEINSPECTORNAMESPACE_VARIABLESET_ADDALLVARIABLESTOSET_OFFSET UNITYSDK_OFFSET(0x958E9F0)
#define RUNTIMEINSPECTORNAMESPACE_VARIABLESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x958EAE0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int VariableSet_TypeDefinitionIndex = 35728;

	class VariableSet : public Il2CppObject
	{
	public:
		::System::String* INCLUDE_ALL_VARIABLES; // 0x0
		::System::String* m_type; // 0x10
		::System::Type* type; // 0x18
		::Il2CppArray<::System::Object*>* m_variables; // 0x20
		Il2CppObject* variables; // 0x28

		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VARIABLESET_INIT_OFFSET))(nullptr);
		}

		::System::Void AddAllVariablesToSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VARIABLESET_ADDALLVARIABLESTOSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_VARIABLESET_.CTOR_OFFSET))(nullptr);
		}

	};
}

