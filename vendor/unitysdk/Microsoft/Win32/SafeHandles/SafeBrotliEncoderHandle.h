#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x980BFA0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x980D350)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x980D370)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeBrotliEncoderHandle_TypeDefinitionIndex = 38055;

	class SafeBrotliEncoderHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEBROTLIENCODERHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

	};
}

