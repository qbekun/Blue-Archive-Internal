#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ATTENDANCEREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2210A80)
#define ATTENDANCEREWARDRESPONSEMESSAGE_GET_RECEIVEDBYMAIL_OFFSET UNITYSDK_OFFSET(0x2210AB0)

	inline static constexpr unsigned int AttendanceRewardResponseMessage_TypeDefinitionIndex = 4368;

	class AttendanceRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Boolean _ReceivedByMail_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ReceivedByMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDRESPONSEMESSAGE_GET_RECEIVEDBYMAIL_OFFSET))(nullptr);
		}

	};

