#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_DISABLEMEDIAINSERTIONPROMPT_CREATE_OFFSET UNITYSDK_OFFSET(0x92EA790)
#define SYSTEM_IO_DISABLEMEDIAINSERTIONPROMPT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92EA890)

namespace System::IO
{
	inline static constexpr unsigned int DisableMediaInsertionPrompt_TypeDefinitionIndex = 25219;

	class DisableMediaInsertionPrompt : public Il2CppObject
	{
	public:
		::System::Boolean _disableSuccess; // 0x10
		::System::UInt32 _oldMode; // 0x14
		::System::Boolean useUWPFallback; // 0x0

		::System::IO::DisableMediaInsertionPrompt* Create()
		{
			return (return (::System::IO::DisableMediaInsertionPrompt*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DISABLEMEDIAINSERTIONPROMPT_CREATE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DISABLEMEDIAINSERTIONPROMPT_DISPOSE_OFFSET))(nullptr);
		}

	};
}

