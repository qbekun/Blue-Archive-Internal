#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_LOCKQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EA120)
#define SYSTEM_THREADING_LOCKQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0x93EA150)
#define SYSTEM_THREADING_LOCKQUEUE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x93EA340)
#define SYSTEM_THREADING_LOCKQUEUE_PULSE_OFFSET UNITYSDK_OFFSET(0x93EA420)

namespace System::Threading
{
	inline static constexpr unsigned int LockQueue_TypeDefinitionIndex = 24118;

	class LockQueue : public Il2CppObject
	{
	public:
		::System::Threading::ReaderWriterLock* rwlock; // 0x10
		::System::Int32 lockCount; // 0x18

		::System::Void .ctor(::System::Threading::ReaderWriterLock* arg)
		{
			((::System::Void(*)(::System::Threading::ReaderWriterLock*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Wait(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void Pulse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_PULSE_OFFSET))(nullptr);
		}

	};
}

