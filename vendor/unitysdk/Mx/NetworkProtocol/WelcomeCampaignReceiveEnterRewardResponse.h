#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WelcomeCampaignDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF50720)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50730)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF50740)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF50750)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50760)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF50770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignReceiveEnterRewardResponse_TypeDefinitionIndex = 12188;

	class WelcomeCampaignReceiveEnterRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WelcomeCampaignDB* _WelcomeCampaignInfo_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x58

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WelcomeCampaignInfo(::MX::GameLogic::DBModel::WelcomeCampaignDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WelcomeCampaignDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WelcomeCampaignDB* get_WelcomeCampaignInfo()
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

	};
}

