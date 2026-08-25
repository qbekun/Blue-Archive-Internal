#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7B00)
#define SYSTEM_IOASYNCRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x9AD7B10)
#define SYSTEM_IOASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7B60)
#define SYSTEM_IOASYNCRESULT_GET_ASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AD7BB0)
#define SYSTEM_IOASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x9AD7BC0)
#define SYSTEM_IOASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x9AD7BD0)
#define SYSTEM_IOASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x9AD7D40)
#define SYSTEM_IOASYNCRESULT_SET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x9AD7D50)
#define SYSTEM_IOASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD7D60)
#define SYSTEM_IOASYNCRESULT_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AD7D70)
#define SYSTEM_IOASYNCRESULT_COMPLETEDISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IOAsyncResult_TypeDefinitionIndex = 29194;

	class IOAsyncResult : public Il2CppObject
	{
	public:
		::System::AsyncCallback* async_callback; // 0x10
		::System::Object* async_state; // 0x18
		::System::Threading::ManualResetEvent* wait_handle; // 0x20
		::System::Boolean completed_synchronously; // 0x28
		::System::Boolean completed; // 0x29

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::AsyncCallback* get_AsyncCallback()
		{
			return (return (::System::AsyncCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCCALLBACK_OFFSET))(nullptr);
		}

		::System::Object* get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::Void set_CompletedSynchronously(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_SET_COMPLETEDSYNCHRONOUSLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void set_IsCompleted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_SET_ISCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCRESULT_COMPLETEDISPOSED_OFFSET))(nullptr);
		}

	};
}

