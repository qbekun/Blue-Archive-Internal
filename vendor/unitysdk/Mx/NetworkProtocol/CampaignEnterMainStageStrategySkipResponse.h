#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF155E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF155F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15600)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterMainStageStrategySkipResponse_TypeDefinitionIndex = 11451;

	class CampaignEnterMainStageStrategySkipResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGESTRATEGYSKIPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

