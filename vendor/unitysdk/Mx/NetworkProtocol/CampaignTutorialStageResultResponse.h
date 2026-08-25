#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_CLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF15280)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15290)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF152A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF152B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF152C0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_CLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF152D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_FIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF152E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF152F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_FIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF15300)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF15310)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignTutorialStageResultResponse_TypeDefinitionIndex = 11441;

	class CampaignTutorialStageResultResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		Il2CppObject* _ClearReward_k__BackingField; // 0x60
		Il2CppObject* _FirstClearReward_k__BackingField; // 0x68

		::System::Void set_ClearReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_CLEARREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClearReward()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_CLEARREWARD_OFFSET))(nullptr);
		}

		::System::Void set_FirstClearReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_SET_FIRSTCLEARREWARD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_FirstClearReward()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_FIRSTCLEARREWARD_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

	};
}

