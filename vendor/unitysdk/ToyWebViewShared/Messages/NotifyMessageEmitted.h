#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6BB0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7840)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB78C0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyMessageEmitted_TypeDefinitionIndex = 25448;

	class NotifyMessageEmitted : public Il2CppObject
	{
	public:
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYMESSAGEEMITTED_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

