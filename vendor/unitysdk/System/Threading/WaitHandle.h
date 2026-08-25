#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }

#define SYSTEM_THREADING_WAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E8B90)
#define SYSTEM_THREADING_WAITHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x93E8C10)
#define SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x93E8C80)
#define SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x93E8D80)
#define SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x93E8E40)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E8E80)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E8FD0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E9100)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E9120)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E9140)
#define SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET UNITYSDK_OFFSET(0x93E8F60)
#define SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET UNITYSDK_OFFSET(0x93E9160)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET UNITYSDK_OFFSET(0x93E9510)
#define SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET UNITYSDK_OFFSET(0x93E9D10)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93E94C0)
#define SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93E9CB0)
#define SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET UNITYSDK_OFFSET(0x93E9E20)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93E9E80)
#define SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93E9ED0)
#define SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET UNITYSDK_OFFSET(0x93E92A0)
#define SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET UNITYSDK_OFFSET(0x93E98C0)
#define SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93E3230)
#define SYSTEM_THREADING_WAITHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E9F30)

namespace System::Threading
{
	inline static constexpr unsigned int WaitHandle_TypeDefinitionIndex = 24116;

	class WaitHandle : public Il2CppObject
	{
	public:
		::System::Int32 WaitTimeout; // 0x0
		::System::Int32 MAX_WAITHANDLES; // 0x0
		::System::Int32 waitHandle; // 0x18
		::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle; // 0x20
		::System::Boolean hasThreadAffinity; // 0x28
		::System::Int32 WAIT_OBJECT_0; // 0x0
		::System::Int32 WAIT_ABANDONED; // 0x0
		::System::Int32 WAIT_FAILED; // 0x0
		::System::Int32 ERROR_TOO_MANY_POSTS; // 0x0
		::System::Int32 ERROR_NOT_OWNED_BY_CALLER; // 0x0
		::System::Int32 InvalidHandle; // 0x0
		::System::Int32 MaxWaitHandles; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_INIT_OFFSET))(nullptr);
		}

		::System::Void set_Handle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SET_HANDLE_OFFSET))(arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle()
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeWaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_GET_SAFEWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_SETHANDLEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean WaitOne(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean WaitOne(::System::TimeSpan* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean WaitOne()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(nullptr);
		}

		::System::Boolean WaitOne(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean WaitOne(::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean WaitOne(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_INTERNALWAITONE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WaitAny(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WaitAny(::Il2CppArray<::System::Object*>* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITANY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ThrowAbandonedMutexException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowAbandonedMutexException(::System::Int32 arg, ::System::Threading::WaitHandle* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Threading::WaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_THROWABANDONEDMUTEXEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 WaitOneNative(::System::Runtime::InteropServices::SafeHandle* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITONENATIVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WaitMultiple(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAITMULTIPLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Wait_internal(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_WAIT_INTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

