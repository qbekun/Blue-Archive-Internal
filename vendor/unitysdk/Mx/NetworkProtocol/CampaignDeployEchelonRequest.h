#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF150A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0xF150B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0xF150C0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF150D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF150E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF150F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignDeployEchelonRequest_TypeDefinitionIndex = 11437;

	class CampaignDeployEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x48

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

