#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IConsoleDriver_TypeDefinitionIndex = 23974;

	class IConsoleDriver : public Il2CppObject
	{
	public:
		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONSOLEDRIVER_READKEY_OFFSET))(arg, nullptr);
		}

	};
}

