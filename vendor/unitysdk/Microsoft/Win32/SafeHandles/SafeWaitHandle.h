#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BE90)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BEE0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BF40)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeWaitHandle_TypeDefinitionIndex = 23654;

	class SafeWaitHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};
}

