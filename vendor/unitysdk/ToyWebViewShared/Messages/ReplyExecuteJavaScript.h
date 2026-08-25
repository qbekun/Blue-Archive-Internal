#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6CB0)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7FE0)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB80A0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int ReplyExecuteJavaScript_TypeDefinitionIndex = 25458;

	class ReplyExecuteJavaScript : public Il2CppObject
	{
	public:
		::System::Int32 sequence; // 0x18
		::System::String* returnValue; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYEXECUTEJAVASCRIPT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

