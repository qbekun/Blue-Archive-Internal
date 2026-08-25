#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC7EA0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC7CF0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9AC7ED0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AC7EE0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeProcessHandle_TypeDefinitionIndex = 29154;

	class SafeProcessHandle : public Il2CppObject
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeProcessHandle* InvalidHandle; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

