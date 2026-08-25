#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BDF0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BE40)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeFindHandle_TypeDefinitionIndex = 23653;

	class SafeFindHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};
}

