#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5200)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerBrowsableAttribute_TypeDefinitionIndex = 25027;

	class DebuggerBrowsableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Diagnostics::DebuggerBrowsableState* state; // 0x10

		::System::Void .ctor(::System::Diagnostics::DebuggerBrowsableState* arg)
		{
			((::System::Void(*)(::System::Diagnostics::DebuggerBrowsableState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

