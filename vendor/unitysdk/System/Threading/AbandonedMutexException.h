#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D72A0)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D72F0)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7430)
#define SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93D73B0)

namespace System::Threading
{
	inline static constexpr unsigned int AbandonedMutexException_TypeDefinitionIndex = 24031;

	class AbandonedMutexException : public Il2CppObject
	{
	public:
		::System::Int32 _mutexIndex; // 0x90
		::System::Threading::Mutex* _mutex; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Threading::WaitHandle* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Threading::WaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupException(::System::Int32 arg, ::System::Threading::WaitHandle* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Threading::WaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_SETUPEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

