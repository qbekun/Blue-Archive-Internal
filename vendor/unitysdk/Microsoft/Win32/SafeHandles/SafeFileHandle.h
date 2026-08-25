#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BD20)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BD80)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeFileHandle_TypeDefinitionIndex = 23652;

	class SafeFileHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};
}

