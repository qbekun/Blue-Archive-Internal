#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WelcomeCampaignDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF506A0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF506B0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0xF506C0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF506D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignGetInfoResponse_TypeDefinitionIndex = 12186;

	class WelcomeCampaignGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WelcomeCampaignDB* _WelcomeCampaignInfo_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::WelcomeCampaignDB* get_WelcomeCampaignInfo()
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_GET_WELCOMECAMPAIGNINFO_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_WelcomeCampaignInfo(::MX::GameLogic::DBModel::WelcomeCampaignDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WelcomeCampaignDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_SET_WELCOMECAMPAIGNINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

