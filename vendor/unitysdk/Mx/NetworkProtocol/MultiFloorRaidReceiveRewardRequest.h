#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AD60)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_SET_REWARDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4AD70)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AD80)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4AD90)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4ADA0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_REWARDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4ADB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidReceiveRewardRequest_TypeDefinitionIndex = 11973;

	class MultiFloorRaidReceiveRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::System::Int32 _RewardDifficulty_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RewardDifficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_SET_REWARDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDRECEIVEREWARDREQUEST_GET_REWARDDIFFICULTY_OFFSET))(nullptr);
		}

	};
}

