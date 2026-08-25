#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6CF0)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB8310)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB83C0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int ReplyResize_TypeDefinitionIndex = 25460;

	class ReplyResize : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYRESIZE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

