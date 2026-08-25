#pragma once
#include "../unitysdk.h"

#define SYSTEM_EVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CE30)
#define SYSTEM_EVENTARGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x933CE40)

namespace System
{
	inline static constexpr unsigned int EventArgs_TypeDefinitionIndex = 23734;

	class EventArgs : public Il2CppObject
	{
	public:
		::System::EventArgs* Empty; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

