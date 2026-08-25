#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF148D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF148E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF148F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14900)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_SET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF14910)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14920)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignWithdrawEchelonRequest_TypeDefinitionIndex = 11420;

	class CampaignWithdrawEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _WithdrawEchelonEntityId_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_WithdrawEchelonEntityId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_WITHDRAWECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_WithdrawEchelonEntityId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_SET_WITHDRAWECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

