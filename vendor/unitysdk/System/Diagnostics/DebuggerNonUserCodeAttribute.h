#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERNONUSERCODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C51D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerNonUserCodeAttribute_TypeDefinitionIndex = 25023;

	class DebuggerNonUserCodeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERNONUSERCODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

