#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5360)
#define SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x92C53E0)
#define SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x92C53F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerDisplayAttribute_TypeDefinitionIndex = 25029;

	class DebuggerDisplayAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* name; // 0x10
		::System::String* value; // 0x18
		::System::String* type; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE_SET_TYPE_OFFSET))(str, nullptr);
		}

	};
}

