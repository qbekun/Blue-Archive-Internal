#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_SET_DAILYRECORDID_OFFSET UNITYSDK_OFFSET(0xF42440)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_GET_DAILYRECORDID_OFFSET UNITYSDK_OFFSET(0xF42450)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42460)
#define MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42470)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int DailyRecordRewardRequest_TypeDefinitionIndex = 11627;

	class DailyRecordRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _DailyRecordId_k__BackingField; // 0x40

		::System::Void set_DailyRecordId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_SET_DAILYRECORDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DailyRecordId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_GET_DAILYRECORDID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_DAILYRECORDREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

