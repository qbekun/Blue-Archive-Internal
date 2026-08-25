#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6B10)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7290)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7310)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyConsoleMessage_TypeDefinitionIndex = 25442;

	class NotifyConsoleMessage : public Il2CppObject
	{
	public:
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONSOLEMESSAGE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

