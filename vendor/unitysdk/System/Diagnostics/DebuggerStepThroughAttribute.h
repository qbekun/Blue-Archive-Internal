#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERSTEPTHROUGHATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C51B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerStepThroughAttribute_TypeDefinitionIndex = 25021;

	class DebuggerStepThroughAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERSTEPTHROUGHATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

