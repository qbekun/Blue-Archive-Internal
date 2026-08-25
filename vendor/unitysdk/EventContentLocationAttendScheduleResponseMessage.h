#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTLOCATIONATTENDSCHEDULERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6BB00)

	inline static constexpr unsigned int EventContentLocationAttendScheduleResponseMessage_TypeDefinitionIndex = 2477;

	class EventContentLocationAttendScheduleResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONATTENDSCHEDULERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

