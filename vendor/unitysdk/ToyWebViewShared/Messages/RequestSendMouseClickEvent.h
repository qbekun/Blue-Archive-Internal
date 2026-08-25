#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB71D0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA220)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA380)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSendMouseClickEvent_TypeDefinitionIndex = 25477;

	class RequestSendMouseClickEvent : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		Button* button; // 0x20
		::System::Boolean up; // 0x24
		::System::Int32 clickCount; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSECLICKEVENT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

