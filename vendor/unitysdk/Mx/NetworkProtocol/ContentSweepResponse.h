#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF41660)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41670)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_BONUSPARCELS_OFFSET UNITYSDK_OFFSET(0xF41680)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_BONUSPARCELS_OFFSET UNITYSDK_OFFSET(0xF41690)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_EVENTCONTENTBONUSPARCELS_OFFSET UNITYSDK_OFFSET(0xF416A0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_CLEARPARCELS_OFFSET UNITYSDK_OFFSET(0xF416B0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_EVENTCONTENTBONUSPARCELS_OFFSET UNITYSDK_OFFSET(0xF416C0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF416D0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_CLEARPARCELS_OFFSET UNITYSDK_OFFSET(0xF416E0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0xF416F0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41700)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF41710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepResponse_TypeDefinitionIndex = 11586;

	class ContentSweepResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearParcels_k__BackingField; // 0x50
		Il2CppObject* _BonusParcels_k__BackingField; // 0x58
		Il2CppObject* _EventContentBonusParcels_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x70

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_BonusParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_BONUSPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_BonusParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_BONUSPARCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventContentBonusParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_EVENTCONTENTBONUSPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_ClearParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_CLEARPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentBonusParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_EVENTCONTENTBONUSPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_CLEARPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

	};
}

