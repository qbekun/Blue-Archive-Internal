#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BA60)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_FREEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BAB0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BB00)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914BBA0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x914BC40)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x914BCA0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_MONO_DANGEROUSGETSTRING_OFFSET UNITYSDK_OFFSET(0x914BCD0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafePasswordHandle_TypeDefinitionIndex = 23651;

	class SafePasswordHandle : public Il2CppObject
	{
	public:
		::System::Int32 CreateHandle(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_CREATEHANDLE_OFFSET))(str, nullptr);
		}

		::System::Void FreeHandle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_FREEHANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

		::System::String* Mono_DangerousGetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPASSWORDHANDLE_MONO_DANGEROUSGETSTRING_OFFSET))(nullptr);
		}

	};
}

