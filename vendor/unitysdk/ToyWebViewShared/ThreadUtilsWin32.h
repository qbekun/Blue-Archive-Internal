#pragma once
#include "../unitysdk.h"

namespace ToyWebViewShared { class IWebViewLogger; }

#define TOYWEBVIEWSHARED_THREADUTILSWIN32_ENUMERATECURRENTPROCESSTHREADS_OFFSET UNITYSDK_OFFSET(0x9BABDC0)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_CREATETOOLHELP32SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9BAD110)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_THREAD32FIRST_OFFSET UNITYSDK_OFFSET(0x9BAD1A0)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_THREAD32NEXT_OFFSET UNITYSDK_OFFSET(0x9BAD6A0)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x9BAD730)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x9BAD090)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_OPENTHREAD_OFFSET UNITYSDK_OFFSET(0x9BAD240)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_GETTHREADPRIORITY_OFFSET UNITYSDK_OFFSET(0x9BAD2E0)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_GETTHREADDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BAD7C0)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_LOCALFREE_OFFSET UNITYSDK_OFFSET(0x9BAD850)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_TRYGETTHREADDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BAD370)
#define TOYWEBVIEWSHARED_THREADUTILSWIN32_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BAD8E0)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int ThreadUtilsWin32_TypeDefinitionIndex = 25406;

	class ThreadUtilsWin32 : public Il2CppObject
	{
	public:
		::System::UInt32 TH32CS_SNAPTHREAD; // 0x0
		::System::Int32 INVALID_HANDLE_VALUE; // 0x0
		::System::Int32 THREAD_QUERY_INFORMATION; // 0x0
		::System::Int32 THREAD_QUERY_LIMITED_INFORMATION; // 0x0
		::System::Int32 THREAD_PRIORITY_ERROR_RETURN; // 0x0

		Il2CppObject* EnumerateCurrentProcessThreads(::ToyWebViewShared::IWebViewLogger* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::ToyWebViewShared::IWebViewLogger*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_ENUMERATECURRENTPROCESSTHREADS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CreateToolhelp32Snapshot(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_CREATETOOLHELP32SNAPSHOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Thread32First(::System::Int32 arg, THREADENTRY32&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, THREADENTRY32&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_THREAD32FIRST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Thread32Next(::System::Int32 arg, THREADENTRY32&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, THREADENTRY32&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_THREAD32NEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CloseHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_CLOSEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetCurrentProcessId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_GETCURRENTPROCESSID_OFFSET))(nullptr);
		}

		::System::Int32 OpenThread(::System::Int32 arg, ::System::Boolean arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_OPENTHREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetThreadPriority(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_GETTHREADPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetThreadDescription(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_GETTHREADDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LocalFree(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_LOCALFREE_OFFSET))(arg, nullptr);
		}

		::System::String* TryGetThreadDescription(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_TRYGETTHREADDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_THREADUTILSWIN32_.CCTOR_OFFSET))(nullptr);
		}

	};
}

