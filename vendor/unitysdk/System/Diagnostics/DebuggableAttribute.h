#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C51E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggableAttribute_TypeDefinitionIndex = 25025;

	class DebuggableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		DebuggingModes* m_debuggingModes; // 0x10

		::System::Void .ctor(DebuggingModes* arg)
		{
			((::System::Void(*)(DebuggingModes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

