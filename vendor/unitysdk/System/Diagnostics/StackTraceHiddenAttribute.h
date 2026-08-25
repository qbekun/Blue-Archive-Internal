#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C51A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTraceHiddenAttribute_TypeDefinitionIndex = 25020;

	class StackTraceHiddenAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

