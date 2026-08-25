#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONSOLECANCELEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93854D0)
#define SYSTEM_CONSOLECANCELEVENTARGS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9385520)
#define SYSTEM_CONSOLECANCELEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9385530)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventArgs_TypeDefinitionIndex = 23884;

	class ConsoleCancelEventArgs : public Il2CppObject
	{
	public:
		::System::ConsoleSpecialKey* _type; // 0x10
		::System::Boolean _Cancel_k__BackingField; // 0x14

		::System::Void .ctor(::System::ConsoleSpecialKey* arg)
		{
			((::System::Void(*)(::System::ConsoleSpecialKey*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS_GET_CANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

