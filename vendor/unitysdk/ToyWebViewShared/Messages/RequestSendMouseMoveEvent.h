#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB71F0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA4A0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA580)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSendMouseMoveEvent_TypeDefinitionIndex = 25478;

	class RequestSendMouseMoveEvent : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		Button* button; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSENDMOUSEMOVEEVENT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

