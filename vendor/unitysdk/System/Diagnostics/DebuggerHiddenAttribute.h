#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C51C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerHiddenAttribute_TypeDefinitionIndex = 25022;

	class DebuggerHiddenAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

