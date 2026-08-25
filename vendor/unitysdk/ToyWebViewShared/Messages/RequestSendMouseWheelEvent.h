#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7210)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA640)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA720)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSendMouseWheelEvent_TypeDefinitionIndex = 25479;

	class RequestSendMouseWheelEvent : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		::System::Int32 delta; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEWHEELEVENT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

