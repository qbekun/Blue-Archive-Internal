#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WelcomeCampaignDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF507C0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF507D0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF507E0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF507F0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF50800)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF50810)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignAttendanceRewardResponse_TypeDefinitionIndex = 12190;

	class WelcomeCampaignAttendanceRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WelcomeCampaignDB* _WelcomeCampaignInfo_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::WelcomeCampaignDB* get_WelcomeCampaignInfo()
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_WelcomeCampaignInfo(::MX::GameLogic::DBModel::WelcomeCampaignDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WelcomeCampaignDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

	};
}

