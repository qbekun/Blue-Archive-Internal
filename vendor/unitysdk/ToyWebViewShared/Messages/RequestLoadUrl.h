#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB70E0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB99E0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB9C80)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestLoadUrl_TypeDefinitionIndex = 25471;

	class RequestLoadUrl : public Il2CppObject
	{
	public:
		::System::String* url; // 0x18
		Il2CppObject* additionalHttpHeaders; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADURL_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

