#pragma once
#include "../unitysdk.h"

#define SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x93BD710)
#define SYSTEM_NULLCONSOLEDRIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B5410)
#define SYSTEM_NULLCONSOLEDRIVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93BD770)

namespace System
{
	inline static constexpr unsigned int NullConsoleDriver_TypeDefinitionIndex = 23984;

	class NullConsoleDriver : public Il2CppObject
	{
	public:
		::System::ConsoleKeyInfo* EmptyConsoleKeyInfo; // 0x0

		::System::ConsoleKeyInfo* ReadKey(::System::Boolean arg)
		{
			return (return (::System::ConsoleKeyInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_READKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLCONSOLEDRIVER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

