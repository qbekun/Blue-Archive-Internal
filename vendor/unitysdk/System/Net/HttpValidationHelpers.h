#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPVALIDATIONHELPERS_ISINVALIDMETHODORHEADERSTRING_OFFSET UNITYSDK_OFFSET(0x9B8D480)
#define SYSTEM_NET_HTTPVALIDATIONHELPERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B8D5B0)

namespace System::Net
{
	inline static constexpr unsigned int HttpValidationHelpers_TypeDefinitionIndex = 29638;

	class HttpValidationHelpers : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_httpTrimCharacters; // 0x0

		::System::Boolean IsInvalidMethodOrHeaderString(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVALIDATIONHELPERS_ISINVALIDMETHODORHEADERSTRING_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVALIDATIONHELPERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

