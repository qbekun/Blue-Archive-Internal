#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C70)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7FC0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7FD0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyUrlChanged_TypeDefinitionIndex = 25456;

	class NotifyUrlChanged : public Il2CppObject
	{
	public:
		::System::String* url; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYURLCHANGED_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

