#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define SYSTEM_DIAGNOSTICS_PROCESSWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B021B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessWaitHandle_TypeDefinitionIndex = 29259;

	class ProcessWaitHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSWAITHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

