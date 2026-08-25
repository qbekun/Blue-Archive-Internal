#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0xF0EB10)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EB20)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0xF0EB30)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EB40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AcademyAttendScheduleRequest_TypeDefinitionIndex = 11225;

	class AcademyAttendScheduleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ZoneId_k__BackingField; // 0x40

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_GET_ZONEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

