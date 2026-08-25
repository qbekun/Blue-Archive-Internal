#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E8510)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET UNITYSDK_OFFSET(0x93EBC00)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x93EC220)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x93EC350)

namespace System::Threading
{
	inline static constexpr unsigned int RegisteredWaitHandle_TypeDefinitionIndex = 24122;

	class RegisteredWaitHandle : public Il2CppObject
	{
	public:
		::System::Threading::WaitHandle* _waitObject; // 0x18
		::System::Threading::WaitOrTimerCallback* _callback; // 0x20
		::System::Object* _state; // 0x28
		::System::Threading::WaitHandle* _finalEvent; // 0x30
		::System::Threading::ManualResetEvent* _cancelEvent; // 0x38
		::System::TimeSpan* _timeout; // 0x40
		::System::Int32 _callsInProcess; // 0x48
		::System::Boolean _executeOnlyOnce; // 0x4C
		::System::Boolean _unregistered; // 0x4D

		::System::Void .ctor(::System::Threading::WaitHandle* arg, ::System::Threading::WaitOrTimerCallback* arg, ::System::Object* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Wait(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Void DoCallBack(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Unregister(::System::Threading::WaitHandle* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::WaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET))(arg, nullptr);
		}

	};
}

