#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }

#define SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93EA500)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_ICALL_OFFSET UNITYSDK_OFFSET(0x93EA550)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET UNITYSDK_OFFSET(0x93EA560)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93EA690)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET UNITYSDK_OFFSET(0x93EA6A0)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93EA7D0)
#define SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93EA7E0)

namespace System::Threading
{
	inline static constexpr unsigned int NativeEventCalls_TypeDefinitionIndex = 24120;

	class NativeEventCalls : public Il2CppObject
	{
	public:
		::System::Int32 CreateEvent_internal(::System::Boolean arg, ::System::Boolean arg, ::System::String* str, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Boolean, ::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_INTERNAL_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Int32 CreateEvent_icall(::System::Boolean arg, ::System::Boolean arg, ::System::Object** arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::Boolean, ::System::Object**, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CREATEEVENT_ICALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetEvent_internal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_SETEVENT_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResetEvent_internal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_RESETEVENT_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void CloseEvent_internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_NATIVEEVENTCALLS_CLOSEEVENT_INTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

