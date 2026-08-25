#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6BF0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB78F0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7900)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyPageStarted_TypeDefinitionIndex = 25450;

	class NotifyPageStarted : public Il2CppObject
	{
	public:
		::System::String* url; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGESTARTED_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

