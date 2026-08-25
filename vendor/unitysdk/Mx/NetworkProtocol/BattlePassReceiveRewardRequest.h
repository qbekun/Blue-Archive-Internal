#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11D70)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11D80)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11D90)
#define MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11DA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassReceiveRewardRequest_TypeDefinitionIndex = 11335;

	class BattlePassReceiveRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x40

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

