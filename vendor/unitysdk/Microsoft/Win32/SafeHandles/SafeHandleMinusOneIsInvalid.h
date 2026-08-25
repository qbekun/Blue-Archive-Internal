#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEMINUSONEISINVALID_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BFC0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEMINUSONEISINVALID_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x914C010)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeHandleMinusOneIsInvalid_TypeDefinitionIndex = 23656;

	class SafeHandleMinusOneIsInvalid : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEMINUSONEISINVALID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEMINUSONEISINVALID_GET_ISINVALID_OFFSET))(nullptr);
		}

	};
}

