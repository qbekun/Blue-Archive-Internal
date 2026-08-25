#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB71B0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA080)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA160)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSendKeyEvent_TypeDefinitionIndex = 25476;

	class RequestSendKeyEvent : public Il2CppObject
	{
	public:
		EventType* eventType; // 0x18
		::System::Int32 keyCode; // 0x1C
		Modifier* modifier; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDKEYEVENT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

