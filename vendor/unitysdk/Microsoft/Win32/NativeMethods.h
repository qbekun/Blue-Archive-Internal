#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle&; }
namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC7B40)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x9AC7D20)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x9AC7D30)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x9AC7D40)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x9AC7E80)
#define MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET UNITYSDK_OFFSET(0x9AC7E90)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 29153;

	class NativeMethods : public Il2CppObject
	{
	public:
		::System::Boolean DuplicateHandle(::System::Runtime::InteropServices::HandleRef* arg, ::System::Runtime::InteropServices::HandleRef* arg, ::System::Runtime::InteropServices::HandleRef* arg, ::Microsoft::Win32::SafeHandles::SafeProcessHandle&* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef*, ::System::Runtime::InteropServices::HandleRef*, ::System::Runtime::InteropServices::HandleRef*, ::Microsoft::Win32::SafeHandles::SafeProcessHandle&*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCurrentProcess()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET))(nullptr);
		}

		::System::Boolean GetExitCodeProcess(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCurrentProcessId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET))(nullptr);
		}

		::System::Boolean CloseProcess(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET))(arg, nullptr);
		}

	};
}

