#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5280)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerTypeProxyAttribute_TypeDefinitionIndex = 25028;

	class DebuggerTypeProxyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* typeName; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

