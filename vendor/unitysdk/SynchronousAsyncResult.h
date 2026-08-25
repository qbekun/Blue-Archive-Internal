#pragma once
#include "unitysdk.h"

#define SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93163F0)
#define SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9316720)
#define SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9316430)
#define SYNCHRONOUSASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9317400)
#define SYNCHRONOUSASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x9317410)
#define SYNCHRONOUSASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x9317520)
#define SYNCHRONOUSASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x9317530)
#define SYNCHRONOUSASYNCRESULT_THROWIFERROR_OFFSET UNITYSDK_OFFSET(0x9317540)
#define SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET UNITYSDK_OFFSET(0x93164A0)
#define SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9316760)

	inline static constexpr unsigned int SynchronousAsyncResult_TypeDefinitionIndex = 25283;

	class SynchronousAsyncResult : public Il2CppObject
	{
	public:
		::System::Object* _stateObject; // 0x10
		::System::Boolean _isWrite; // 0x18
		::System::Threading::ManualResetEvent* _waitHandle; // 0x20
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionInfo; // 0x28
		::System::Boolean _endXxxCalled; // 0x30
		::System::Int32 _bytesRead; // 0x34

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Object* get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::Void ThrowIfError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_THROWIFERROR_OFFSET))(nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHRONOUSASYNCRESULT_ENDWRITE_OFFSET))(arg, nullptr);
		}

	};

