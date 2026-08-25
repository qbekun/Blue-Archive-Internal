#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14990)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF149A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF149B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF149C0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF149D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF149E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF149F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14A10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignMapMoveRequest_TypeDefinitionIndex = 11422;

	class CampaignMapMoveRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x50

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

	};
}

