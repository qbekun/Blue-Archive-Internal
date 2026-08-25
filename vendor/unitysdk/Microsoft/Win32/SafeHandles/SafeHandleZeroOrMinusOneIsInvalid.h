#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_.CTOR_OFFSET UNITYSDK_OFFSET(0x914B990)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x914BF60)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeHandleZeroOrMinusOneIsInvalid_TypeDefinitionIndex = 23655;

	class SafeHandleZeroOrMinusOneIsInvalid : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET))(nullptr);
		}

	};
}

