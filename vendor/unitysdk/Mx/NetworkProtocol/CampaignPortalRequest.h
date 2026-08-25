#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15320)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF15330)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15340)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15350)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF15360)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignPortalRequest_TypeDefinitionIndex = 11442;

	class CampaignPortalRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

