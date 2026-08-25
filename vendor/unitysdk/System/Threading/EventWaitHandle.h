#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_EVENTWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7480)
#define SYSTEM_THREADING_EVENTWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E02F0)
#define SYSTEM_THREADING_EVENTWAITHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x93DDD60)
#define SYSTEM_THREADING_EVENTWAITHANDLE_SET_OFFSET UNITYSDK_OFFSET(0x93D93B0)

namespace System::Threading
{
	inline static constexpr unsigned int EventWaitHandle_TypeDefinitionIndex = 24083;

	class EventWaitHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg, ::System::Threading::EventResetMode* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Threading::EventResetMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Threading::EventResetMode* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::Threading::EventResetMode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean Reset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_RESET_OFFSET))(nullptr);
		}

		::System::Boolean Set()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_SET_OFFSET))(nullptr);
		}

	};
}

