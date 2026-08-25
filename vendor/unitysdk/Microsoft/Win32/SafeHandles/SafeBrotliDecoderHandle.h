#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x980BDA0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x980D3C0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x980D3E0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeBrotliDecoderHandle_TypeDefinitionIndex = 38056;

	class SafeBrotliDecoderHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIDECODERHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

	};
}

