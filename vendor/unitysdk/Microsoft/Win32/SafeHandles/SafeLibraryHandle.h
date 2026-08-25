#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFELIBRARYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914B940)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFELIBRARYHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914B9E0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeLibraryHandle_TypeDefinitionIndex = 23649;

	class SafeLibraryHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFELIBRARYHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFELIBRARYHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};
}

