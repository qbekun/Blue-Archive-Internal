#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_WIN32_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x914B390)
#define MICROSOFT_WIN32_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x914B320)
#define MICROSOFT_WIN32_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9149500)
#define MICROSOFT_WIN32_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x914B2C0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 23646;

	class ThrowHelper : public Il2CppObject
	{
	public:
		::System::Void ThrowArgumentException(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(str, str, nullptr);
		}

		::System::Void ThrowArgumentNullException(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(str, nullptr);
		}

		::System::Void ThrowSecurityException(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET))(str, nullptr);
		}

		::System::Void ThrowObjectDisposedException(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))(str, str, nullptr);
		}

	};
}

