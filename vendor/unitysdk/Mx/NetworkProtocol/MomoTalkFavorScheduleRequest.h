#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_SET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0xF4AA40)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_GET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0xF4AA50)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AA60)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AA70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkFavorScheduleRequest_TypeDefinitionIndex = 11965;

	class MomoTalkFavorScheduleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScheduleId_k__BackingField; // 0x40

		::System::Void set_ScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_SET_SCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_GET_SCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

